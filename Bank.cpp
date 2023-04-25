//
// Created by anzef on 23. 03. 2023.
//

#include "Bank.h"

Bank::Bank() = default;
Bank::~Bank(){
    for(Account* account : accounts){
        delete account;
    }
};

void Bank::addAccount(Account *account) {
    accounts.push_back(account);
}

bool Bank::makeDepositOnAccount(double amount, unsigned int accountNumber) {
    for(Account *account : accounts){
        if(account->getNumber() == accountNumber && amount > 0){
            account->makeDeposit(amount);
            return true;
        }
    }
    return false;
}

bool Bank::makeWithdrawalOnAccount(double amount, unsigned int accountNumber) {
    for(Account *account : accounts){
        if(account->getNumber() == accountNumber && amount > 0){
            account->makeWithdrawal(amount);
            return true;
        }
    }
    return false;
}

std::string Bank::toString() const {
    std::string accountsAvailable;
    for(Account *account : accounts){
        accountsAvailable += account->toString() + " // ";
    }
    return "accounts available: " + accountsAvailable;
}


