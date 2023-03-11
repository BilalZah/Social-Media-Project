#include "C:\Users\wdb21138\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\wdb21138\Documents\GitHub\Social-Media-Project/Subscription.h"
using namespace std;
#include <string>
Subscription::Subscription(){}
Subscription::~Subscription(){}
<<<<<<< HEAD
 double  Subscription::getsubscription_price() { return subscription_price; }
void Subscription::setsubscription_price(double subscription_price) { this->subscription_price = subscription_price; }
int Subscription::getSortCode(){return sort_code;}
void Subscription::setSortCode(int sortCode){this->sort_code=sortCode;}
int Subscription::getaccountNumber(){return account_Number;}
void Subscription::setaccountNumber(int  account_Number){this->account_Number=account_Number;}
=======

string Subscription::getSortCode(){return sortcode;}
void Subscription::setSortCode(string sortcode){this->sortcode=sortcode;}
string Subscription::getBankAccount(){return bank_account;}
void Subscription::setBankAccount(string Subscription){this->bank_account=bank_account;}
>>>>>>> a2f0b87dc8a081d9ec41a241b7d4e4c98cc8224d
double Subscription::getbalance(){return balance;}
void Subscription::setbalance(double balance){this->balance=balance;}


string Subscription::getsubscription() { return subscription; }
void Subscription::setsubscription(string subscription) { this->subscription = subscription; }
