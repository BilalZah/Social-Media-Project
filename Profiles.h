#pragma once

using namespace std;
#include<string>
class Profiles: public Posting_Media {

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
	char getPassword();
	void setPassword(char);
	string getBio();
	void setBio(string);
	string getInterests();
	void setInterests(string);
	char getProfile_Photo();
	void setProfile_Photo(char);




private:
	string name;
	string email_address;
	string user_name;
	int dob_day;
	int dob_month;
	int dob_year;
	char password;
	string Bio;
	string Interests;
	char Profile_Photo;
};