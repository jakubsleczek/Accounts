#include "Account.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "CheckAccount.h"
#include "Utility.h"
#include <iostream>
#include <string>
#include <memory>


int main(){
//Account a("BUU",300);
//deposit(a,200);
//deposit(a,-100);
//withdraw(a,300);
//withdraw(a,300);
//std::cout<<"-----------------------------------\n";
//Savings_Account b("Sav",200);
//deposit(b,200);
//deposit(b,-100);
//withdraw(b,300);
//withdraw(b,300);
//std::cout<<"-----------------------------------\n";
//Check_Account c("Check",200);
//deposit(c,200);
//deposit(c,-100);
//withdraw(c,300);
//withdraw(c,300);
//std::cout<<"-----------------------------------\n";
//Trust_Account d("Trust",200);
//deposit(d,5000);
//deposit(d,-100);
//withdraw(d,500);
//withdraw(d,1000);
//withdraw(d,500);
//withdraw(d,10);
//withdraw(d,10);
//withdraw(d,10);
//std::cout<<"-------------------------------------\n";
try{
//Account *p1 = new Savings_Account("bicz",4000);
std::shared_ptr <Account> p1 = std::make_shared<Savings_Account> ("sa1",4000);
deposit(p1, 900);
try{
withdraw(p1, 5000);
}
catch (const InsufficientFundsException &ex){
    std::cerr<<ex.what();
}
std::cout<<*p1;
}
catch (const IllegalBalanceException &ex){
    std::cerr<<ex.what();
}






return 0;
}
