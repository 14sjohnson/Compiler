#ifndef READSTATEMENT_HPP
#define READSTATEMENT_HPP

#include "Statement.hpp"
#include "../expressions/LValExpr.hpp"

class ReadStatement : public Statement {
    private:
        std::vector<Expression*>* exprList;
    public:
        ReadStatement(std::vector<Expression*>* exprList) : exprList(exprList) {}
        void emit() override {
            for (auto e : *exprList) { 
                if (e != nullptr) {
                    // std::cout << dynamic_cast<LValExpr*>(e)->getIdent() << std::endl;
                    auto expr = dynamic_cast <LValExpr*>(symbol_table.lookupLVal(dynamic_cast<LValExpr*>(e)->getIdent()));
                    expr->offset = symbol_table.getOffset(4);
                    auto regA = new Register();
                    if (expr->getType() == IntegerType::getInstance()) {
                        std::cout << "li $v0, 5" << std::endl;
                        std::cout << "syscall" << std::endl;
                        std::cout << "add " << regA->getRegister() << ", $v0, $zero" << std::endl;
                        std::cout << "sw " << regA->getRegister() << " " << expr->offset << "($gp)" << std::endl;
                        }
                    if (expr->getType() == CharacterType::getInstance()) {
                        std::cout << "li $v0 12" << std::endl;
                        std::cout << "syscall" << std::endl;
                        std::cout << "add " << regA->getRegister() << ", $v0, $zero" << std::endl;
                        std::cout << "sw " << regA->getRegister() << " " << expr->offset << "($gp)" << std::endl;
                    }
                }
            }
        }
};

#endif
