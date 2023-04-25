//
// Created by anzef on 23. 03. 2023.
//

#ifndef NALOGA0502_BANK_H
#define NALOGA0502_BANK_H


#include <string>
#include <vector>
#include "Account.h"

class Bank {
private:
    std::vector<Account*> accounts;
public:
    Bank();
    ~Bank();
    void addAccount(Account* account);
    bool makeDepositOnAccount(double amount, unsigned int accountNumber);
    bool makeWithdrawalOnAccount(double amount, unsigned int accountNumber);
    std::string toString() const;
};


#endif //NALOGA0502_BANK_H
