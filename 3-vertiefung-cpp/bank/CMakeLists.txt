cmake_minimum_required(VERSION 3.31)
project(bank)

set(CMAKE_CXX_STANDARD 20)

add_executable(bank main.cpp
        Account.cpp
        Account.h
        TransactionAccount.cpp
        MoneyMarketAccount.cpp
        MoneyMarketAccount.h
        PropertyFinanceAgreement.cpp
        PropertyFinanceAgreement.h
        AccountType.h
        TransactionAccount.cpp
        TransactionAccount.h)
