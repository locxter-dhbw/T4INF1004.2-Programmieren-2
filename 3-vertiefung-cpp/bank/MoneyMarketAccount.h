#ifndef MONEYMARKETACCOUNT_H
#define MONEYMARKETACCOUNT_H
#include "Account.h"

class MoneyMarketAccount : Account {
private:
    int m_runtime;

public:
    // Constructor
    MoneyMarketAccount(int blz, int runtime);

    // Destructor
    ~MoneyMarketAccount() override = default;

    // Getter/Setter
    double get_runtime() const;

    // Methods
    void print_info() override;

    bool change_balance(double amount) override;
};

#endif //MONEYMARKETACCOUNT_H
