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
	char getlike_button();
	void setlike_button(char);
	char getshare();
	void setshare(char);

	int getGroup_members();
	void setGroup_members(int);
	string getGroup_name();
	void setGroup_name(string);


private:
	string comment;
	int number_of_likes;
	char like_button;
	char share;
	int group_members;
	string group_name;

};