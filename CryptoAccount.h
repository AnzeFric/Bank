//
// Created by anzef on 27. 03. 2023.
//

#ifndef NALOGA0502_CRYPTOACCOUNT_H
#define NALOGA0502_CRYPTOACCOUNT_H


#include "Account.h"

class CryptoAccount : public Account{
private:
    std::string cryptoType;
public:
    CryptoAccount(unsigned int number, double balance, Person* owner, std::string cryptoType);
    std::string toString() const override;
    void print() const;
};


#endif //NALOGA0502_CRYPTOACCOUNT_H
