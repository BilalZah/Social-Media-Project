#pragma once
class Posting Media:public Profiles, public follow_list {
public:
	int getnum_likes();
	void setnum_likes(int);
	char share_to_follow_list();
	void share_to_follow_list (char)
private:
	int num_likes;
	char share_to_follow_list;
};