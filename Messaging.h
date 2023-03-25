#pragma once
using namespace std; 
#include<string>
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"

class Messaging :public Profiles {
public:
Messaging();
~Messaging();

string getcomment();
void setcomment(string);
int getnumber_of_likes();
void setnumber_of_likes(int);
string getlike_button();
void setlike_button(string);
string getshare();
void setshare(string);
int getGroup_members();
void setGroup_members(int);
string getGroup_name();
void setGroup_name(string);

private:
	string comment;
	int number_of_likes;
	string like_button;
	string share;
	int group_members;
	string group_name;
};