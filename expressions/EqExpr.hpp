#ifndef EQEXPR
#define EQEXPR

#include "Expression.hpp"

class EqExpr : public Expression { 
    private:
        Expression* a;
        Expression* b;
    public:
        EqExpr(Expression* e1, Expression* e2, Type* type) : Expression(type), a(e1), b(e2) {}
        Register* emit() {
            auto regA = a->emit();
            auto regB = b->emit();
            auto result = new Register();
            std::cout << "seq " << result->getRegister() << ", "
                      << regA->getRegister() << ", "
                      << regB->getRegister() 
                      << std::endl;
            if (!a->isLval())delete regA;
            if (!b->isLval())delete regB;
            return result;
        }
};

#endif
