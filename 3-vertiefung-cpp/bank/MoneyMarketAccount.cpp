#include "MoneyMarketAccount.h"

#include <iostream>

MoneyMarketAccount::MoneyMarketAccount(int blz, int runtime) : Account(AccountType::MONEY_MARKET_ACCOUNT, blz), m_runtime(runtime) {
}

double MoneyMarketAccount::get_runtime() const {
    return m_runtime;
}

void MoneyMarketAccount::print_info() {
    Account::print_info();
    std::cout << "Runtime: " << m_runtime << std::endl;
}

bool MoneyMarketAccount::change_balance(double amount) {
    return Account::change_balance(amount);
}
