#ifndef FORSTATEMENT_HP
#define FORSTATEMENT_HPP

#include "Statement.hpp"
#include "AssignmentStatement.hpp"
#include "../expressions/LValExpr.hpp"

class ForStatement : public Statement {
    private:
        Expression* StartExpr;
        Expression* EndExpr;
        std::string ident;
        std::vector<Statement*>* Statements;
        bool up;
    public:
        ForStatement(std::string ident, Expression* StartExpr, Expression* EndExpr, std::vector<Statement*>* Statements, bool up) : 
                        ident(ident), StartExpr(StartExpr), EndExpr(EndExpr), Statements(Statements), up(up) {}
        void emit() override {
            auto e = new LValExpr(ident,1);
            e->setType(IntegerType::getInstance());
            symbol_table.storeIdentType(ident,e);
            // auto expr = dynamic_cast <LValExpr*>(symbol_table.lookupLVal(ident));
            auto assign = new AssignmentStatement(ident,StartExpr);
            assign->emit();
            auto regC = new Register();
            symbol_table.storeAssign(ident,StartExpr);
            auto regB = EndExpr->emit();
            auto expr = dynamic_cast<LValExpr*>(symbol_table.lookupLVal(ident));
            auto regA = expr->emit();
            std::cout << "r" << expr->offset << ": ";
            if(up) std::cout << "slt " << regC->getRegister() << " " << regB->getRegister() << " " << regA->getRegister() << std::endl;
            else std::cout << "sgt " << regC->getRegister() << " " << regB->getRegister() << " " << regA->getRegister() << std::endl;
            std::cout << "beq " << regC->getRegister() << " 1 n" << expr->offset << std::endl;
            for (auto s : *Statements) {
                if (s != nullptr) {
                    s->emit();
                }
            }
            if(up) std::cout << "addi " << regA->getRegister() << " " << regA->getRegister() << " 1" << std::endl;
            else std::cout << "sub " << regA->getRegister() << " " << regA->getRegister() << " 1" << std::endl;

            std::cout << "sw " << regA->getRegister() << " " << expr->offset << "($gp)" << std::endl;
            std::cout << "j r" << expr->offset << std::endl;
            std::cout << "n" << expr->offset << ": ";
        }
};

#endif
