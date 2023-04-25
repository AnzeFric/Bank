//
// Created by anzef on 23. 03. 2023.
//

#ifndef NALOGA0502_ACCOUNT_H
#define NALOGA0502_ACCOUNT_H


#include <string>
#include "Person.h"

class Account {
private:
    Person* owner;
protected:
    unsigned int number;
    double balance;
public:
    Account(unsigned int number, double balance, Person* owner);
    unsigned int getNumber() const;
    virtual bool makeDeposit(double amount);
    virtual bool makeWithdrawal(double amount);
    virtual std::string toString() const;
};


#endif //NALOGA0502_ACCOUNT_H
