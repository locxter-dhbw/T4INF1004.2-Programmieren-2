#include "TransactionAccount.h"

#include <iostream>

TransactionAccount::TransactionAccount(int blz, double dispo)
        : Account(AccountType::TRANCSACTION_ACCOUNT, blz),
          m_dispo(dispo) {
}

double TransactionAccount::get_dispo() const {
    return m_dispo;
}

void TransactionAccount::set_dispo(double dispo) {
    this->m_dispo = dispo;
}

void TransactionAccount::print_info() {
    Account::print_info();
    std::cout << "Dispo: " << m_dispo << std::endl;
}

bool TransactionAccount::change_balance(double amount) {
    if (m_balance + amount + m_dispo < 0) return false;
    m_balance += amount;
    return true;
}
