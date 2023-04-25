cmake_minimum_required(VERSION 3.21)
project(naloga0502)

set(CMAKE_CXX_STANDARD 14)

add_executable(naloga0502 main.cpp Date.h Date.cpp Bank.cpp Bank.h Account.cpp Account.h Person.cpp Person.h SavingsAccount.cpp SavingsAccount.h CryptoAccount.cpp CryptoAccount.h)
