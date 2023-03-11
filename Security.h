#pragma once
#include<string>
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
using namespace std;
class Security :public Profiles {
public:
	Security();
	~Security();
	int get2FA();
	void set2FA(int );
	int getphone_number();
	void setphone_number(int);

private:
	int  two_FA;
	int phone_number;
};