#include "TrustAccount.h"

Trust_Account::Trust_Account(std::string p_name, double p_balance, double p_int_rate, double p_bonus)
    :Savings_Account(p_name, p_balance, p_int_rate), bonus{p_bonus}{};


bool Trust_Account::deposit(double amount){
    if(amount >= 5000)
        amount += 50;
    return Account::deposit(amount);
};
bool Trust_Account::withdraw(double amount){
    if(counter < 3 && amount < (balance*limit/100)){
        counter++;
        return Account::withdraw(amount);
    }
    else
        return false;
};

//std::ostream &operator<<(std::ostream &os, const Trust_Account &obj){
//    os<<"Trust Account name: "<<obj.name<<", balance:"<<obj.balance<<", intrest rate: "<<obj.int_rate<<std::endl;
//    return os;
//};

void Trust_Account::print(std::ostream &os) const{
    os<<"Trust Account name: "<<this->name<<", balance:"<<this->balance<<", intrest rate: "<<this->int_rate<<std::endl;
}
