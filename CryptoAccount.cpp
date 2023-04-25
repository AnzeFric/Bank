//
// Created by anzef on 27. 03. 2023.
//

#include <iostream>
#include "CryptoAccount.h"

CryptoAccount::CryptoAccount(unsigned int number, double balance, Person *owner, std::string cryptoType) : Account(number, balance, owner), cryptoType(cryptoType) {}

std::string CryptoAccount::toString() const {
    return Account::toString() + ", crypto account: " + cryptoType;
}

void CryptoAccount::print() const {
    std::cout << CryptoAccount::toString() << std::endl;
}