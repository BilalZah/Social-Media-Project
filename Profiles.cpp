
#include"Profiles"
using namespace std;
#include<string>
Profiles::Profiles() {}


Profiles::~Profiles() {}
string Profiles::getName() { return Name; }
void Profiles::setName(string name) { Name = name; }
string Profiles::getemail_address() { return email_address; }
void  Profiles::setemail_address(string email_address) {this->email_address=email_address ; }
string Profiles::getUser_name() { return User_name; }
void  Profiles::setUser_name(string User_name) { this->User_name = User_name; }

string Profiles::getInterests() { return Interests; }
void  Profiles::setInterests(string Interests) { this->Interests = Interests; }

string Profiles::getBio() { return Bio; }
void  Profiles::setBio(string Bio) { this->Bio = Bio; }




char Profiles::getProfile_Photo() { return Profile_Photo; }
void  Profiles::setProfile_Photo(char Profile_Photo) { this->Profile_Photo = Profile_Photo; }



int Profiles::getdob_day() { return dob_day; }
void Profiles::setdob_day(int dob_day) { this->dob_day = dob_day; }
int Profiles::getdob_month() { return dob_month; }
void Profiles::setdob_month(int dob_month) { this->dob_month = dob_month; }
int Profiles::getdob_year() { return dob_year; }
void Profiles::setdob_year(int dob_year) { this->dob_year = dob_year; }

char Profiles::getPassword() { return Password; }


void Profiles::setPassword(char Password) { this->Password = Password; }

