#include <iostream>

#include "Account.h"
#include "MoneyMarketAccount.h"
#include "PropertyFinanceAgreement.h"
#include "TransactionAccount.h"

int Account::m_transaction_account_count = 0;
int Account::m_money_market_account_count = 0;
int Account::m_property_finance_agreement_count = 0;

int main() {
    TransactionAccount myGiro(12345, 500);
    MoneyMarketAccount myDepot(54321, 12);
    PropertyFinanceAgreement myHouse(696969, 500000);
    myGiro.print_info();
    std::cout << std::endl;
    myDepot.print_info();
    std::cout << std::endl;
    myHouse.print_info();
    return 0;
}
