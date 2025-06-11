#ifndef PROPERTYFINANCEAGREEMENT_H
#define PROPERTYFINANCEAGREEMENT_H
#include "Account.h"

class PropertyFinanceAgreement : Account {
private:
    double m_target_balance;

public:
    // Constructor
    PropertyFinanceAgreement(int blz, double target_balance);

    // Destructor
    ~PropertyFinanceAgreement() override = default;

    // Getter/Setter
    double get_target_balance() const;

    // Methods
    void print_info() override;

    bool change_balance(double amount) override;
};

#endif //PROPERTYFINANCEAGREEMENT_H
