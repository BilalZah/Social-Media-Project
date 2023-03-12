
//#include"C:\Users\Dell\Documents\GitHub\Social - Media - Project /Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Messaging.h"

#include  "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"


using namespace std;
#include<string>
Messaging::Messaging():Profiles() {}

Messaging::~Messaging() {}
string Messaging::getcomment() { return comment; }

void  Messaging::setcomment(string comment) { this->comment = comment; }


int Messaging::getnumber_of_likes() { return number_of_likes; }
void  Messaging::setnumber_of_likes(int number_of_likes) { this->number_of_likes = number_of_likes; }
string Messaging::getlike_button() { return like_button; }
void  Messaging::setlike_button(string like_button) { this->like_button = like_button; }

string Messaging::getGroup_name() { return group_name; }
void  Messaging::setGroup_name(string group_name) { this->group_name = group_name; }


int Messaging::getGroup_members() { return group_members; }
void  Messaging::setGroup_members(int group_members) { this->group_members = group_members; }

string Messaging::getshare() { return share; }
void  Messaging::setshare(string share) { this->share = share; }
