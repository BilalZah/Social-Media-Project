#pragma once
class Messaging :public Profiles,public follow_list {
public:
	string getcomments();
	void setcomments(string);



private:
	string comment;
};