#pragma once
#include<string>
using namespace std;
class Security :public Profiles {
public:
	string get2FA();
	void set2FA(string );

private:
	string two_FA;
};