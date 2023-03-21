#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Subscription.h"
using namespace std;
#include <string>
Subscription::Subscription(){}
Subscription::~Subscription(){}

 
double  Subscription::getsubscription_price() { return subscription_price; }
void Subscription::setsubscription_price(double subscription_price) { this->subscription_price = subscription_price; }

int Subscription::getSortCode(){return sort_code;}
void Subscription::setSortCode(int sortCode){this->sort_code=sortCode;}

int Subscription::getaccountNumber(){return account_Number;}
void Subscription::setaccountNumber(int  account_Number){this->account_Number=account_Number;}



double Subscription::getbalance(){return balance;}
void Subscription::setbalance(double balance){this->balance=balance;}


string Subscription::getsubscription() { return subscription; }
void Subscription::setsubscription(string subscription) { this->subscription = subscription; }
