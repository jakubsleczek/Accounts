#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_

#include<iostream>
#include<string>
#include "SavingsAccount.h"

class Trust_Account: public Savings_Account{
//friend std::ostream &operator<<(std::ostream &os, const Trust_Account &obj);
static constexpr const char *d_name = "Trust Account";
static constexpr double d_balance = 0.0;
static constexpr double d_int_rate = 5;
static constexpr double d_bonus = 50;
static constexpr double limit = 20.0;
//static constexpr int counter = 3;
protected:
    double bonus;
    int counter{0};
public:
    Trust_Account(std::string p_name = d_name, double p_balance = d_balance, double p_int_rate = d_int_rate, double p_bonus = d_bonus);
    virtual ~Trust_Account() = default;
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
};

#endif // _TRUSTACCOUNT_H_
