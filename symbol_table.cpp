#include "symbol_table.hpp"
#include <iostream>
#include <vector>
#include "./expressions/ExprMakers.hpp"
#include "./expressions/LValExpr.hpp"


SymbolTable symbol_table;
int offset = 0;

int SymbolTable::getOffset(int a){
    offset += a;
    return offset-a;
}

std::string SymbolTable::storeString(std::string str) {
    strings.push_back(str);
    return ("str" + std::to_string(strings.size()-1));
}

void SymbolTable::storeAssign(std::string ident, Expression* expr) {
    scopes.back().assignments.emplace(ident,expr);
}
void SymbolTable::storeIdentType(std::string ident, Expression* expr) {
        // std::cout <<"kkkkkk" << dynamic_cast <LValExpr*>(expr)->reg->getRegister() << std::endl;
        // std::cout <<"kkkkkk" << dynamic_cast <LValExpr*>(expr)->reg->getRegister() << std::endl;
        
    scopes.back().assignments.emplace(ident, expr);
}

Type* SymbolTable::lookupType(std::string ident) {
    for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
        auto typeLookup = it->types.find(ident);
        if (typeLookup != it->types.end()) {
            return typeLookup->second;
        }
    }
    std::cout << "I did this here" << std::endl;
    return IntegerType::getInstance();
    //throw undefinedType();
}

void SymbolTable::declareConst(std::string ident, Expression *expr) {
    scopes.back().constants.emplace(ident, expr);
}
void SymbolTable::deleteItem(std::string ident) {
    scopes.back().assignments.erase(ident);
}

// Expression* SymbolTable::lookupLVal(Expression* expr) {
//     for (auto it = scopes.rbegin(); it != scopes.rend(); it++) {
//         for (auto assign = it->assignments.rbegin(); assign != it->assignments.rend(); assign++){
//             if(assign->second == expr){
//                 return assign->second;
//             }
//         }
//     }
//     throw undefinedVariable();
// }
Expression* SymbolTable::lookupLVal(std::string ident) {
    for (auto it = scopes.rbegin(); it != scopes.rend(); it++) {
        auto findConstant = it->constants.find(ident);
        if (findConstant != it->constants.end()) {
            return findConstant->second;
        }
        auto findAssign = it->assignments.find(ident);
        if (findAssign != it->assignments.end()){
            return findAssign->second;
        }
        // for (auto assign = it->assignments.rbegin(); assign != it->assignments.rend(); assign++){
        //     std::cout << "alkdsf"  << assign->first << std::endl;
        //     if (assign->first == std::string(ident)){
        //         return assign->second;
        //     }
        
    }
    std::cout << ident<<"ident" << std::endl;
    throw undefinedVariable();
}
void SymbolTable::placeTypeInScope(std::string ident, Type* type){
    std::cout << ident << std::endl;
    Scope a = Scope();
    a.types.emplace(ident, type);
    scopes.push_back(a);
}
void SymbolTable::enterScope() {
    scopes.emplace_back();
}

void SymbolTable::exitScope() {
    scopes.pop_back();
}

void SymbolTable::emitStrings() {
    std::cout << ".data" << std::endl;
    for (auto i = 0; i < strings.size(); ++i) {
        std::cout << "str" << std::to_string(i) << ": .asciiz " << strings[i] << std::endl;
    }
    // std::cout << "newline: .asciiz \"\\n\"" << std::endl;
}
