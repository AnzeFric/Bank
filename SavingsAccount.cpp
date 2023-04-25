//
// Created by anzef on 23. 03. 2023.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(unsigned int number, double balance, Person *owner, double interestRate) :
    Account(number, balance, owner), interestRate(interestRate), lastWithdrawalDate(0, 0 ,0) {
}

Date SavingsAccount::getLastWithdrawalDate() const {
    return lastWithdrawalDate;
}

bool SavingsAccount::makeDeposit(double amount) {
    if(amount < 0){
        return false;
    }
    balance += amount * interestRate;
    return true;
}

bool SavingsAccount::makeWithdrawal(double amount) {
    if(90 >= Date::getDifferenceDays(lastWithdrawalDate, Date::getCurrentDate()) || amount < 0){
        return false;
    }
    balance -= amount;
    return true;
}

std::string SavingsAccount::toString() const {
    return Account::toString() + " | interest rate: " + std::to_string(interestRate);
}
