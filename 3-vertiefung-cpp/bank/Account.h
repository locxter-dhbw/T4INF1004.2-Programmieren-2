#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "AccountType.h"

class Account {
private:
    static int m_transaction_account_count;
    static int m_money_market_account_count;
    static int m_property_finance_agreement_count;
protected:
    int m_account_number;
    AccountType m_account_type;
    int m_blz;
    double m_balance;
    double m_interest_rate;
public:
    // Constructor
    Account(AccountType m_account_type, int m_blz);

    // Destructor
    virtual ~Account() = default;

    // Getter/setter
    int get_account_number() const;

    void set_m_account_number(int m_account_number);

    AccountType get_account_type() const;

    void set_m_account_type(AccountType m_account_type);

    int get_blz() const;

    void set_m_blz(int m_blz);

    double get_balance() const;

    void set_m_balance(double m_balance);

    double get_interest_rate() const;

    void set_interest_rate(double m_interest_rate);

    // Methods
    virtual void print_info();

    virtual bool change_balance(double amount);

    static int get_transaction_account_count();

    static int get_money_market_account_count();

    static int get_property_finance_agreement_count();
};

#endif //ACCOUNT_H
