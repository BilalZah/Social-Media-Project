#pragma once
using namespace std; 
#include<string>
<<<<<<< Updated upstream
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project /Profiles.h"
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project /follow_list.h"
class Messaging :public Profiles,public follow_list {
public:
=======
class Messaging :public Profiles {
public:

>>>>>>> Stashed changes
	Messaging();
	~Messaging();
	string getcomments();
	void setcomments(string);
	int getnumber_of_likes();
	void setnumber_of_likes(int);
	char getlike_button();
	void setlike_button(char);
	char getshare();
	void setshare(char);



private:
	string comment;
	int number_of_likes;
	char like_button;
	char share;
};