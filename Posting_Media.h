#pragma once
#include<string>
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
using namespace std;
class Posting_Media:public Profiles {
public:
	Posting_Media() ;
	~Posting_Media();
	int getnum_likes();
	void setnum_likes(int);
	char getshare_to_follow_list();
	void setshare_to_follow_list(char);
	string getcomments();
	void setcomments(string);
	string getcaption();
	void setcaption(string);
	string getpost();
	void setPost(string);
	int getnum_comments();
	void setnum_comments(int);
	string getlike_button();
	void setlike_button(string);

private:
	string post;
	int num_likes;
	char share_to_follow_list;
	string comments;
	string caption;
	int num_comments;
	string like_button;

};