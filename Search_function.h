#pragma once
#include<string>
using namespace std;
class Search_function :public Profiles, public follow_list {
public:
	string getInterests();
	void setInterests(string);

	private:
		string interests;
};