#pragma once
using namespace std;
#include<string>

struct User {
	string name;
	string username;
	string location;
	string Interests;

};// structure that contains users name, location, interests and username.
vector<User> users = {
			{"Ahmed Ali", "Ali", "Glasgow", "Gym"},
			{"Cristiano Ronaldo", "Ronaldo", "Riyadh", "Football"},
			{"Mona Ahmed", "Mona", "Vancouver", "Food"},
			{"Elon Musk", "Elon", "Texas", "Space"},
			{"UN", "UN", "New York", "Health "},

};// vector of User which contains the data for each user
vector<User> search_users(string query) {
	vector<User> results; //vector of User that stores results
	//string::npos is static member of string that represents maximum value of element.
for (User user : users) {//using for loop checks each User object in the collection whether containg query string.
// by calling find function 
		if (user.name.find(query) != string::npos ||
			user.username.find(query) != string::npos ||
			user.Interests.find(query) != string::npos ||
            user.location.find(query) != string::npos) {
			results.push_back(user);
		}
	}
	return results;
}







