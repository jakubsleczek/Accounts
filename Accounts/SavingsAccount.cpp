#include "SavingsAccount.h"

//std::ostream &operator<<(std::ostream &os, const Savings_Account &obj){
//    os<<"Savings Account name: "<<obj.name<<", balance:"<<obj.balance<<", intrest rate: "<<obj.int_rate<<std::endl;
//    return os;
//
//};

Savings_Account::Savings_Account(std::string p_name, double p_balance, double p_int_rate)
    :Account(p_name, p_balance), int_rate{p_int_rate}{
};

bool Savings_Account::deposit(double amount){
    amount += (amount*int_rate/100);
    return Account::deposit(amount);
};

bool Savings_Account::withdraw(double amount){
    return Account::withdraw(amount);
};

void Savings_Account::print(std::ostream &os) const{
    os<<"Savings Account name: "<<this->name<<", balance: "<<this->balance<<", intrest rate: "<<this->int_rate<<std::endl;
}
