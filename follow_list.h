#pragma once
class follow_list: public Profiles, public search_function {
public:
	string getaccount();
	void setaccount(string);
	int getsubscription();
	void setsubscription(int);
	string getsubcription();
	void setsubscription(string); 

private:
	string account;
	int subscription_price;
	string subscription;
};