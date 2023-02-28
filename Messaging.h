#pragma once
class Messaging :public Profiles,public follow_list {
public:
	string getcomments();
	void setcomments(string);
	int getnumber_of_likes();
	void setnumber_of_likes(int);
	char getlike_button();
	void setlike_button(char);



private:
	string comment;
	int number_of_likes;
	char like_button;
};