#ifndef WHILESTATEMENT_HPP
#define WHILESTATEMENT_HPP

#include "Statement.hpp"
#include "AssignmentStatement.hpp"
#include "../expressions/LValExpr.hpp"

class WhileStatement : public Statement {
    private:
        Expression* EndExpr;
        std::vector<Statement*>* Statements;
    public:
        WhileStatement(Expression* EndExpr,std::vector<Statement*>* Statements) : 
                            EndExpr(EndExpr), Statements(Statements){}
        void emit() override {
            auto a = symbol_table.getOffset(4);
            auto b = symbol_table.getOffset(4);
            std::cout << "r" << a << ": ";
            auto regA = EndExpr->emit(); //mem leak
            std::cout << "beq " << regA->getRegister() << " 0 " << "r" << b << std::endl;
            for (auto s : *Statements) {
                if (s != nullptr) {
                    s->emit();
                }
            }
            std::cout << "j r" << a << std::endl;
            std::cout << "r" << b << ": ";
        }
};

#endif
