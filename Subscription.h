#pragma once
#include<string>
using namespace std;
class Subscription :public Profiles {
public:
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
	double balance;




};