#include<iostream>
#include "bankAccount.h"
bankAccount::bankAccount(string n, float bal){
	customerName=n;
	balance=bal;
}

void bankAccount::setName(string n){
	customerName=n;
}

void bankAccount::setBalance(float bal){
	balance=bal;
}
string bankAccount::getName(){
	return customerName;
}
float bankAccount::getBalance(){
	return balance;
}
void bankAccount::deposit(float dep){
	balance=balance+dep;
}

void bankAccount::withdraw(float draw){
        balance=balance-draw;
}
bankAccount::~bankAccount(){
}   
