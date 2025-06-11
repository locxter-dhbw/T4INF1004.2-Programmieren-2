#include "Account.h"

#include <iostream>
#include <random>
#include <bits/ostream.tcc>

Account::Account(AccountType account_type, int blz) : m_account_type(account_type), m_blz(blz), m_balance(0), m_interest_rate(0) {
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distribution(100000,999999);
    m_account_number = distribution(generator);
    switch (account_type) {
        case AccountType::TRANCSACTION_ACCOUNT:
            m_transaction_account_count++;
            break;
        case AccountType::MONEY_MARKET_ACCOUNT:
            m_money_market_account_count++;
            break;
        case AccountType::PROPERTY_FINANCE_AGREEMENT:
            m_property_finance_agreement_count++;
            break;
    }
}

int Account::get_account_number() const {
    return m_account_number;
}

AccountType Account::get_account_type() const {
    return m_account_type;
}

int Account::get_blz() const {
    return m_blz;
}

double Account::get_balance() const {
    return m_balance;
}

double Account::get_interest_rate() const {
    return m_interest_rate;
}

void Account::set_interest_rate(double interest_rate) {
    m_interest_rate = interest_rate;
}

void Account::print_info() {
    std::cout << "Account number: " << m_account_number << std::endl;
    std::cout << "Account type: ";
    switch (m_account_type) {
        case AccountType::TRANCSACTION_ACCOUNT:
            std::cout << "Transaction account" << std::endl;
            break;
        case AccountType::MONEY_MARKET_ACCOUNT:
            std::cout << "Money market account" << std::endl;
            break;
        case AccountType::PROPERTY_FINANCE_AGREEMENT:
            std::cout << "Property finance agreement" << std::endl;
            break;
    }
    std::cout << "BLZ: " << m_blz << std::endl;
    std::cout << "Balance: " << m_balance << std::endl;
    std::cout << "Interest rate: " << m_interest_rate << std::endl;

}

bool Account::change_balance(double amount) {
    if (m_balance + amount < 0) return false;
    m_balance += amount;
    return true;
}

int Account::get_transaction_account_count() {
    return m_transaction_account_count;
}

int Account::get_money_market_account_count() {
    return m_money_market_account_count;
}

int Account::get_property_finance_agreement_count() {
    return m_property_finance_agreement_count;
}
