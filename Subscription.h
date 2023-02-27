#pragma once
#include<string>
using namespace std;
class Subscription :public Profiles {
public:
	string getSortCode();
	void setSortCode(string);
	string getBankAccount();
	void setBankAccount(string);
	bool withdraw(double amount);
private:
	string sortcode;
	string accountNumber;
	double balance;




};