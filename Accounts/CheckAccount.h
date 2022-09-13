#ifndef _CHECKACCOUNT_H_
#define _CHECKACCOUNT_H_

#include "Account.h"
#include<iostream>
#include<string>

class Check_Account: public Account{
//friend std::ostream &operator<<(std::ostream &os, const Check_Account &obj);
static constexpr const char *d_name = "Check Account";
static constexpr double d_balance = 0.0;
static constexpr double d_fee = 1.50;

protected:
    double fee;

public:
    Check_Account(std::string p_name = d_name, double p_balance = d_balance, double p_fee = d_fee);
    virtual ~Check_Account() = default;
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;

};

#endif // _CHECKACCOUNT_H_
