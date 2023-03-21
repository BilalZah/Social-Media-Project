#pragma once

#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
class follow_list: public Profiles {
public:
	follow_list();
	~follow_list();
	
	int getnumber_following();
	void setnumber_following(int);
	int getnumber_followers();
	void setnumber_followers(int);
private:
	int number_followers;
	int number_following;
	
};