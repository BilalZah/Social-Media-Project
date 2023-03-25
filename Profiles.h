#pragma once
using namespace std;
#include<string>

class Profiles{
  public:
	Profiles();
	~Profiles();
    
	string getName();
	void setName(string);
	string getemail_address();
	void setemail_address(string);
	string getUser_name();
	void setUser_name(string);
	int getdob_day();
	void setdob_day(int);
	int getdob_month();
	void setdob_month(int);
	int getdob_year();
	void setdob_year(int);
	int getPassword();
	void setPassword(int);
	string getBio();
	void setBio(string);
	string getInterests();
	void setInterests(string);
	string getProfile_Photo();
	void setProfile_Photo(string);
private:
	string name;
	string email_address;
	string user_name;
	int dob_day;
	int dob_month;
	int dob_year;
	int password;
	string Bio;
	string Interests;
	string Profile_Photo;
	};