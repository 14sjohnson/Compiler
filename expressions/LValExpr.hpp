#ifndef LVALEXPR_HPP
#define LVALEXPR_HPP

#include "Expression.hpp"

class LValExpr : public Expression {
    private:
        std::string ident;
        Type* type;
        bool isConst = false;
        int value;
        char* character;
        std::string str;
        std::string label;
    public:
        int offset;
        bool hasOffset = false;
        Register* reg = NULL;
        LValExpr(std::string ident) :  ident(ident) {setLVal(true);}
        LValExpr(std::string ident, char* character) :  ident(ident), character(character) {type = CharacterType::getInstance();setLVal(true);}
        LValExpr(std::string ident, int value) :  ident(ident), value(value) {type = IntegerType::getInstance();setLVal(true);}
        LValExpr(std::string ident, std::string str) :  ident(ident), str(str) {type = StringType::getInstance();setLVal(true);}
        Register* emit() {
            auto e = symbol_table.lookupLVal(ident);
            type = e->getType();
            if (e->isConst()) {
                auto litE = dynamic_cast<LiteralExpression*>(e);
                isConst = true;
                value = litE->getValue();
                if (litE->getType() == StringType::getInstance()) {
                    auto stringE = dynamic_cast<StringLiteral*>(litE);
                    label = stringE->getLabel(); 
                }
                if (type == StringType::getInstance()) {
                    auto result = new Register();
                    std::cout << "la " << result->getRegister() << " "
                            << label
                            << std::endl;
                    return result;
                }
                else {
                    auto result = new Register();
                    std::cout << "addi " << result->getRegister() << ", "
                            << "$zero"
                            << ", "
                            << value
                            << std::endl;
                    return result;
                }
            }
            else {
                // std::cout << "here i am" << ident << std::endl;
                if (type == StringType::getInstance()) {
                    auto regE = e->emit();
                    auto result = new Register();
                    std::cout << "la " << result->getRegister() << " (" << regE->getRegister() << ")" << std::endl;
                    delete regE;
                    return result;
                }
                else {
                    if(reg!=NULL){
                        return reg;
                    }
                    auto V = new Register();
                    std::cout << "lw " << V->getRegister() << " " << dynamic_cast<LValExpr*>(symbol_table.lookupLVal(ident))->offset << "($gp)" << std::endl;
                    return V;
                    // auto regE = e->emit();
                    // auto result = new Register();
                    // std::cout << "add " << result->getRegister() << ", " 
                    //         << regE->getRegister() << ", "
                    //         << "$zero" 
                    //         << std::endl;
                    // delete regE;
                    // return result;
                }
            }
        }
        void setType(Type* T) {
            type = T;
        }
        Type* getType() override {
            return type;
        }
        bool isLval() override {
            return true;
        }
        std::string getIdent() {
            return ident;
        }
        void setRegister(Register* r){
            reg = r;
        }
        
};

#endif
