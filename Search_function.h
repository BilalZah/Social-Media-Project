#pragma once
using namespace std;
#include<string>

struct User {
	string name;
	string username;
	string location;
	string Interests;

};
vector<User> users = {
			{"Ahmed Ali", "Ali", "Glasgow", "Gym"},
			{"Cristiano Ronaldo", "Ronaldo", "Riyadh", "Football"},
			{"Mona Ahmed", "Mona", "Vancouver", "Food"},
			{"Elon Musk", "Elon", "Texas", "Space"},
			{"UN", "UN", "New York", "Health "},

};
vector<User> search_users(string query) {
	vector<User> results;
	for (User user : users) {
		if (user.name.find(query) != string::npos ||
			user.username.find(query) != string::npos ||
			user.Interests.find(query) != string::npos ||

			user.location.find(query) != string::npos) {
			results.push_back(user);
		}
	}
	return results;
}








