#ifndef _UTILITY_H_
#define _UTILITY_H_

#include "Account.h"
#include <memory>


void deposit(std::shared_ptr <Account> obj, double amount);
void withdraw(std::shared_ptr <Account> obj, double amount);

//void deposit(Account &obj, double amount);
//void withdraw(Account &obj, double amount);
//
//void deposit(Savings_Account &obj, double amount);
//void withdraw(Savings_Account &obj, double amount);
//
//void deposit(Check_Account &obj, double amount);
//void withdraw(Check_Account &obj, double amount);
//
//void deposit(Trust_Account &obj, double amount);
//void withdraw(Trust_Account &obj, double amount);

#endif // _UTILITY_H_
