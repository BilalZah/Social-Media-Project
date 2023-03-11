#pragma once
#include<string>
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
using namespace std;
class Subscription :public Profiles {
public:


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

	
	string bank_account;

	double balance;
	




};