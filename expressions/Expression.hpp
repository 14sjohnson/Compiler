#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

#include <iostream>

#include "../types/Type.hpp"
#include "../register.hpp"
#include "ExprValue.hpp"
#include "LiteralValue.hpp"
#include "RegisterValue.hpp"
#include "../types/IntegerType.hpp"
#include "../types/BooleanType.hpp"
#include "../types/StringType.hpp"


class Expression {
    private:
        Type* type = IntegerType::getInstance();
        int value;
        char* character;
        std::string str;
        bool Const;
        bool LVal = false;

    public:
        Register* reg = nullptr;
        Expression() = default;
        ~Expression() {if (reg != nullptr) delete reg;};
        Expression(Type* type) : type(type) {}
        virtual Type* getType() {
            return type;
        };
        void setType(Type* t) {
            type = t;
        }
        int getValue(){return value;}
        char* getChar(){return character;}
        std::string getStr(){return str;}
        void setLVal(bool t){LVal = t;}
        
        virtual bool isConst() { return Const; }
        virtual Register* emit() = 0;
        virtual bool isLval() { return LVal; }
};

#endif
