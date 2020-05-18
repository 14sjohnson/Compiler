#ifndef ASSIGNMENTSTATEMENT_HPP
#define ASSIGNMENTSTATEMENT_HPP

#include "Statement.hpp"
#include "../expressions/LValExpr.hpp"

class AssignmentStatement : public Statement {
    private:
        Expression* Expr;
        std::string ident;
    public:
        AssignmentStatement(std::string ident, Expression* Expr) : 
                        ident(ident), Expr(Expr) {}
        void emit() override {
            auto regA = Expr->emit();
            auto e = dynamic_cast<LValExpr*>(symbol_table.lookupLVal(ident));
            int a = 0;
            if (!e->hasOffset) {
                a = symbol_table.getOffset(4);
                e->offset = a;
                e->hasOffset = true;
            }else{
                a = e->offset;
            }
            std::cout << "sw " << regA->getRegister() << " " << a << "($gp)" <<std::endl;
            symbol_table.storeAssign(ident,e);
            delete regA;
        }
};

#endif
