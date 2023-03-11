#pragma once

using namespace std;
#include<string>
<<<<<<< HEAD
class Profiles {
<<<<<<< Updated upstream
	
=======
class Profiles{
>>>>>>> a2f0b87dc8a081d9ec41a241b7d4e4c98cc8224d
	
public:
	Profiles();
	~Profiles();
<<<<<<< HEAD
	string getname();
	void setname(string);
=======
public:
	Profiles();
		~Profiles();
=======
>>>>>>> a2f0b87dc8a081d9ec41a241b7d4e4c98cc8224d

	string getName();
	void setName(string);
>>>>>>> Stashed changes
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
<<<<<<< HEAD
<<<<<<< Updated upstream
      string  getProfile_Photo();
=======
	string getProfile_Photo();
>>>>>>> Stashed changes
=======
	string getProfile_Photo();
>>>>>>> a2f0b87dc8a081d9ec41a241b7d4e4c98cc8224d
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
<<<<<<< HEAD
<<<<<<< Updated upstream
	string  Profile_Photo;
=======
	string Profile_Photo;
>>>>>>> Stashed changes
=======
	string Profile_Photo;
>>>>>>> a2f0b87dc8a081d9ec41a241b7d4e4c98cc8224d
};