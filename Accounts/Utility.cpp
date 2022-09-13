#include "Utility.h"
#include<iostream>


void deposit(std::shared_ptr <Account> obj, double amount){
    if(obj->deposit(amount))
        std::cout<<"Deposition: "<<amount<<std::endl;
    else
        std::cout<<"Deposition failed!"<<std::endl;
    std::cout<<*obj;
};
void withdraw(std::shared_ptr <Account> obj, double amount){
    if(obj->withdraw(amount))
        std::cout<<"Withdrew: "<<amount<<std::endl;
    else
        std::cout<<"Withdrew failed!"<<std::endl;
    std::cout<<*obj;
};
//
//
//
//void deposit(Savings_Account &obj, double amount){
//    if(obj.deposit(amount))
//        std::cout<<"Deposition: "<<amount<<std::endl;
//    else
//        std::cout<<"Deposition failed!"<<std::endl;
//    std::cout<<obj;
//};
//void withdraw(Savings_Account &obj, double amount){
//    if(obj.withdraw(amount))
//        std::cout<<"Withdrew: "<<amount<<std::endl;
//    else
//        std::cout<<"Withdrew failed!"<<std::endl;
//    std::cout<<obj;
//};
//
//
//
//void deposit(Check_Account &obj, double amount){
//    if(obj.deposit(amount))
//        std::cout<<"Deposition: "<<amount<<std::endl;
//    else
//        std::cout<<"Deposition failed!"<<std::endl;
//    std::cout<<obj;
//};
//void withdraw(Check_Account &obj, double amount){
//    if(obj.withdraw(amount))
//        std::cout<<"Withdrew: "<<amount<<std::endl;
//    else
//        std::cout<<"Withdrew failed!"<<std::endl;
//    std::cout<<obj;
//};
//
//
//
//void deposit(Trust_Account &obj, double amount){
//    if(obj.deposit(amount))
//        std::cout<<"Deposition: "<<amount<<std::endl;
//    else
//        std::cout<<"Deposition failed!"<<std::endl;
//    std::cout<<obj;
//};
//void withdraw(Trust_Account &obj, double amount){
//    if(obj.withdraw(amount))
//        std::cout<<"Withdrew: "<<amount<<std::endl;
//    else
//        std::cout<<"Withdrew failed!"<<std::endl;
//    std::cout<<obj;
//};
//void deposit(Account &obj, double amount){
//    if(obj.deposit(amount))
//        std::cout<<"Deposition: "<<amount<<std::endl;
//    else
//        std::cout<<"Deposition failed!"<<std::endl;
//    std::cout<<obj;
//};

