#include<iostream>
#include "bankAccount.h"

using namespace std;
int main(){
	bankAccount jackAccount("Jack Smith", 50.0);

	bankAccount jillAccount("Jill Brian", 100);
	bankAccount bankArray[3] = {bankAccount("Ralph Kramden", 10), bankAccount("Alice Kramden",20), bankAccount("Ed Norton", 30)};
	jackAccount.deposit(30);
	jillAccount.deposit(30);
	bankArray[0].deposit(30);
	bankArray[1].deposit(30);
	bankArray[2].deposit(30);

	jackAccount.withdraw(20);
	jillAccount.withdraw(20);
	bankArray[0].withdraw(20);
	bankArray[1].withdraw(20);
	bankArray[2].withdraw(20);

	cout<<"Printing balances"<<endl;
	cout<<jackAccount.getName()<<" "<<jackAccount.getBalance()<<endl;
	cout<<jillAccount.getName()<<" "<<jillAccount.getBalance()<<endl;
	cout<<bankArray[0].getName()<<" "<<bankArray[0].getBalance()<<endl;
	cout<<bankArray[1].getName()<<" "<<bankArray[1].getBalance()<<endl;
	cout<<bankArray[2].getName()<<" "<<bankArray[2].getBalance()<<endl;


}
