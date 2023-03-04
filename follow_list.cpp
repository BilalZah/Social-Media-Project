

#include"Profiles"
#include "follow_list"
using namespace std;
#include<string>
follow_list::follow_list() {}

follow_list::~follow_list() {}
string follow_list::getaccount() { return account; }
void  follow_list::setaccount(string account) { this->account = account; }
int follow_list::getsubscription_price() { return subscription_price; }
void  follow_list::setsubscription_price(int subscription_price) { this->subscription_price = subscription_price; }


string follow_list::getsubcription() { return subscription; }
void  follow_list::getsubcription(stringsubscription) { this->subscription = subscription; }