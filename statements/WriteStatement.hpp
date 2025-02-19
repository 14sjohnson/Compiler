#ifndef WRITESTATEMENT_HPP
#define WRITESTATEMENT_HPP

#include "Statement.hpp"

class WriteStatement : public Statement {
    private:
        std::vector<Expression*>* exprList;
    public:
        WriteStatement(std::vector<Expression*>* exprList) : exprList(exprList) {}
        void emit() override {
            for (auto e : *exprList) {
                if (e != nullptr) {
                    auto regA = e->emit();
                    if (e->getType() == IntegerType::getInstance() || e->getType() == BooleanType::getInstance()) {
                        std::cout << "li $v0, 1" << std::endl;
                        std::cout << "add $a0, " << regA->getRegister() << ", $zero" << std::endl;
                        std::cout << "syscall" << std::endl;
                        delete regA;
                    }
                    else if (e->getType() == CharacterType::getInstance()) {
                        std::cout << "li $v0 11" << std::endl;
                        std::cout << "add $a0, " << regA->getRegister() << ", $zero" << std::endl;
                        std::cout << "syscall" << std::endl;
                        delete regA;
                    }
                    else if (e->getType() == StringType::getInstance()) {
                        std::cout << "li $v0 4" << std::endl;
                        std::cout << "la $a0 (" << regA->getRegister() << ")" << std::endl;
                        std::cout << "syscall" << std::endl;
                        delete regA;
                    }
                    else {
                        //caution, originally throw IncorrectTypePassed();
                        std::cout << "li $v0, 1" << std::endl;
                        std::cout << "add $a0, " << regA->getRegister() << ", $zero" << std::endl;
                        std::cout << "syscall" << std::endl;
                        delete regA;
                    }
                }
            }
            // std::cout << "li $v0 4" << std::endl;
            // std::cout << "la $a0 newline" << std::endl;
            // std::cout << "syscall" << std::endl;
        }
};

#endif
