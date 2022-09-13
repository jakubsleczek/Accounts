#include "Account.h"

Account::Account(std::string p_name, double p_balance)
    :name{p_name}, balance{p_balance}{
        if (balance < 0)
            throw IllegalBalanceException();
    };


bool Account::deposit(double amount){
    if(amount >= 0){
        balance += amount;
        return true;
    }
    else
        return false;
};

bool Account::withdraw(double amount){
    if(balance - amount >= 0){
        balance -=amount;
        return true;
    }
    else
        throw InsufficientFundsException();
};

//std::ostream &operator<<(std::ostream &os, const Account &obj){
//    os<<"Account name: "<<obj.name<<", balance:"<<obj.balance<<std::endl;
//    return os;
//};

void Account::print(std::ostream &os) const{
    os<<"Account name: "<<this->name<<", balance:"<<this->balance<<std::endl;
}
