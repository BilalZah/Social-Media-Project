#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"
using namespace std;
#include<string>
follow_list::follow_list():Profiles() {}
follow_list::~follow_list() {}

int follow_list::getnumber_followers() { return number_followers; }
void  follow_list::setnumber_followers(int number_followers) { this->number_followers = number_followers; }

int follow_list::getnumber_following() { return number_following; }
void  follow_list::setnumber_following(int number_following) { this->number_following = number_following; }

