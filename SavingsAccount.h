//
// Created by anzef on 23. 03. 2023.
//

#ifndef NALOGA0502_SAVINGSACCOUNT_H
#define NALOGA0502_SAVINGSACCOUNT_H


#include <string>
#include "Account.h"
#include "Date.h"

class SavingsAccount : public Account{
private:
    double interestRate;
    Date lastWithdrawalDate;
public:
    SavingsAccount(unsigned int number, double balance, Person* owner, double interestRate);
    Date getLastWithdrawalDate() const;
    bool makeDeposit(double amount) override;
    bool makeWithdrawal(double amount) override;
    std::string toString() const override;
};


#endif //NALOGA0502_SAVINGSACCOUNT_H
