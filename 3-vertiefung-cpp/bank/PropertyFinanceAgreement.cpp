#include "PropertyFinanceAgreement.h"

#include <iostream>

PropertyFinanceAgreement::PropertyFinanceAgreement(int blz, double target_balance) : Account(AccountType::PROPERTY_FINANCE_AGREEMENT, blz), m_target_balance(target_balance){
}

double PropertyFinanceAgreement::get_target_balance() const {
    return m_target_balance;
}

void PropertyFinanceAgreement::print_info() {
    Account::print_info();
    std::cout << "Target balance: " << m_target_balance << std::endl;
}

bool PropertyFinanceAgreement::change_balance(double amount) {
    if (amount > 0) return Account::change_balance(amount);
    return false;
}
