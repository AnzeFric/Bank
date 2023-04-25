#include <iostream>
#include "Bank.h"
#include "SavingsAccount.h"
#include "CryptoAccount.h"

int main() {
    Bank bank;
    Person *miha = new Person("Miha", "Kovac");
    Account *first = new Account(9983, 0, miha);
    Account *second = new Account(3491, 10, miha);
    SavingsAccount *third = new SavingsAccount(1234, 0, miha, 3);
    CryptoAccount *fourth = new CryptoAccount(4321, 401, miha, "BitCoin");
    CryptoAccount *fifth = new CryptoAccount(555, 0, miha, "Etherium");

    bank.addAccount(first);
    bank.addAccount(second);
    bank.addAccount(third);
    std::cout << bank.toString() << std::endl << std::endl;

    bank.makeDepositOnAccount(12.53, 9983);
    std::cout << first->toString() << std::endl << std::endl;

    first->makeWithdrawal(432);
    std::cout << first->toString() << std::endl << std::endl;

    first->makeWithdrawal(-432);
    std::cout << first->toString() << std::endl << std::endl;

    third->makeDeposit(200);
    std::cout << third->toString() << std::endl;

    std::cout << "------" << std::endl;

    bank.addAccount(fourth);
    bank.addAccount(fifth);

    std::cout << bank.toString() << std::endl;
    fifth->print();
    std::cout << fourth->toString() << std::endl;

    delete miha;
    return 0;
}
