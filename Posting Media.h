#pragma once
class Posting Media:public Profiles, public follow_list {
public:
	int getnum_likes();
	void setnum_likes(int);
private:
	int num_likes;
};