#include "C:\Users\wdb21138\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\wdb21138\Documents\GitHub\Social-Media-Project/Subscription.h"
using namespace std;
#include <string>
Subscription::Subscription(){}
Subscription::~Subscription(){}

string Subscription::getSortCode(){return sortcode;}
void Subscription::setSortCode(string sortcode){this->sortcode=sortcode;}
string Subscription::getBankAccount(){return bank_account;}
void Subscription::setBankAccount(string Subscription){this->bank_account=bank_account;}
double Subscription::getbalance(){return balance;}
void Subscription::setbalance(double balance){this->balance=balance;}
