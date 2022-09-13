#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>
#include "IPrintable.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

class Account: public I_Printable{

//friend std::ostream &operator<<(std::ostream &os, const Account &obj);
static constexpr const char *d_name = "Account";
static constexpr double d_balance = 0.0;

protected:
    std::string name;
    double balance;

public:
    Account(std::string p_name = d_name, double p_balance = d_balance);
    virtual ~Account() = default;
    double getBalance() const {return balance;};
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream &os) const override;
};

#endif // _ACCOUNT_H_
