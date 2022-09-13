#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

#include<iostream>
#include<string>
#include "Account.h"

class Savings_Account: public Account{
//friend std::ostream &operator<<(std::ostream &os, const Savings_Account &obj);
static constexpr const char *d_name = "Savings Account";
static constexpr double d_balance = 0.0;
static constexpr double d_int_rate = 5;

protected:
    double int_rate;
public:
    Savings_Account(std::string name = d_name, double p_balance = d_balance, double p_int_rate = d_int_rate);
    virtual ~Savings_Account() = default;
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
};

#endif // _SAVINGSACCOUNT_H_
