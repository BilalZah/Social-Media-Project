#pragma once
#include<string>
using namespace std;
class Posting_Media:public Profiles {
public:
	int getnum_likes();
	void setnum_likes(int);
	char getshare_to_follow_list();
	void setshare_to_follow_list(char);
	string getcomments();
	void setcomments(string);
	string getcaption();
	void setcaption(string);
private:
	int num_likes;
	char share_to_follow_list;
	string comments;
	string caption;
};