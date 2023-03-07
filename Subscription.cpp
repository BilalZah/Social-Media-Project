#include "Profiles.h"
#include "Subscription.h"
using namespace std;
#include <string>
Subscription::Subscription(){}
Subscription::~Subscription(){}

string Subscription::getsortCode(){return sortCode;}
void Subscription::setsortCode(string sortCode){this->sortCode=sortCode;}
string Subscription::getaccountNumber(){return accountNumber;}
void Subscription::setaccountNumber(string Subscription){this->accountNumber=accountNumber;}
double Subscription::getbalance(){return balance;}
void Subscription::setbalance(double balance){this->balance=balance;}
