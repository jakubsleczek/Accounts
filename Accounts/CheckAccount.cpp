#include "CheckAccount.h"

//std::ostream &operator<<(std::ostream &os, const Check_Account &obj){
//    os<<"Check Account name: "<<obj.name<<", balance:"<<obj.balance<<", fee: "<<obj.fee<<std::endl;
//    return os;
//};

Check_Account::Check_Account(std::string p_name, double p_balance, double p_fee)
    :Account(p_name, p_balance), fee{p_fee}{};

bool Check_Account::withdraw(double amount){
    amount += fee;
    return Account::withdraw(amount);

};

bool Check_Account::deposit(double amount){
    return Account::deposit(amount);
}

void Check_Account::print(std::ostream &os) const{
    os<<"Check Account name: "<<this->name<<", balance:"<<this->balance<<", fee: "<<this->fee<<std::endl;
}
