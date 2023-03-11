
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"
using namespace std;
#include<string>
follow_list::follow_list() {}

follow_list::~follow_list() {}
string follow_list::getaccount() { return account; }
void  follow_list::setaccount(string account) { this->account = account; }
int follow_list::getsubscription_price() { return subscription_price; }
void  follow_list::setsubscription_price(int subscription_price) { this->subscription_price = subscription_price; }
int follow_list::getnumber_followers() { return number_followers; }
void  follow_list::setnumber_followers(int number_followers) { this->number_followers = number_followers; }

int follow_list::getnumber_following() { return number_following; }
void  follow_list::setnumber_following(int number_following) { this->number_following = number_following; }

string follow_list::getsubscription() { return subscription; }
void  follow_list::setsubscription(string subscription) { this->subscription = subscription; }