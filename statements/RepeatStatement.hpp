#ifndef REPEATSTATEMENT_HPP
#define REPEATSTATEMENT_HPP

#include "Statement.hpp"
#include "AssignmentStatement.hpp"
#include "../expressions/LValExpr.hpp"

class RepeatStatement : public Statement {
    private:
        Expression* EndExpr;
        std::vector<Statement*>* Statements;
    public:
        RepeatStatement( std::vector<Statement*>* Statements,Expression* EndExpr) : 
                            EndExpr(EndExpr), Statements(Statements){}
        void emit() override {
            auto a = symbol_table.getOffset(4);
            std::cout << "r" << a << ": ";
            for (auto s : *Statements) {
                if (s != nullptr) {
                    s->emit();
                }
            }
            auto regA = EndExpr->emit();
            std::cout << "beq " << regA->getRegister() << " 0 " << "r" << a << std::endl;
        }
};

#endif
