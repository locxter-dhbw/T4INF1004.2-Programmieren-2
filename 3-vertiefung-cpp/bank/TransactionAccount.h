#ifndef TRANSACTIONACCOUNT_H
#define TRANSACTIONACCOUNT_H
#include "Account.h"

class TransactionAccount : Account {
private:
    double m_dispo;

public:
    // Constructor
    TransactionAccount(int blz, double dispo);

    // Destructor
    ~TransactionAccount() override = default;

    // Getter/Setter
    double get_dispo() const;

    void set_dispo(double dispo);

    // Methods
    void print_info() override;

    bool change_balance(double amount) override;
};

#endif //TRANSACTIONACCOUNT_H
