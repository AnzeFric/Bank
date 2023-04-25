//
// Created by anzef on 23. 03. 2023.
//

#include "Account.h"

Account::Account(unsigned int number, double balance, Person *owner) : number(number), balance(balance), owner(owner) {}

unsigned int Account::getNumber() const {
    return Account::number;
}

bool Account::makeDeposit(double amount) {
    if(amount < 0){
        return false;
    }
    balance += amount;
    return true;
}

bool Account::makeWithdrawal(double amount) {
    if(amount < 0){
        return false;
    }
    balance -= amount;
    return true;
}

std::string Account::toString() const {
    return "account number: " + std::to_string(number) + " | balance: " + std::to_string(balance) + " | owner: " + owner->toString();
}