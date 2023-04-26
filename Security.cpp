#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"

#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Security.h"
using namespace std;
#include <string>

Security::Security():Profiles(){}
Security::~Security(){}

int Security::get2FA() { return two_FA; }
void Security::set2FA(int two_FA) { this->two_FA=two_FA; }

int Security::getphone_number() { return phone_number; }
void Security::setphone_number(int phone_number) { this->phone_number = phone_number; }

