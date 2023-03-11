#pragma once
#include<string>
#include"Profiles.h"
using namespace std;
class Subscription :public Profiles {
public:
<<<<<<< HEAD

	Subscription();
	~Subscription();
	double getsubscription_price();
	void setsubscription_price(double);
	string getsubscription();
	void setsubscription(string);
	int getSortCode();
	void setSortCode(int);
	
	//bool withdraw(double amount);
	int getaccountNumber();
	void setaccountNumber(int);

	double getbalance();
	void setbalance(double);
private:
	string subscription;
	double subscription_price;
	int sort_code;
	int account_Number;
=======
	Subscription();
	~Subscription();
	string getSortCode();
	void setSortCode(string);
	string getBankAccount();
	void setBankAccount(string);
	//bool withdraw(double);
	double getbalance();
	void setbalance(double);
private:
	string sortcode;
	string bank_account;
>>>>>>> a2f0b87dc8a081d9ec41a241b7d4e4c98cc8224d
	double balance;
	




};