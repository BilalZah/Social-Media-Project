#pragma once
using namespace std;
#include<string>

struct User {
	string name;
	string username;
	string location;
	string Interests;
	string following;
	string number_following;
	string number_followers;
	

};// structure that contains users name, location, interests and username.
vector<User> users = {
			{"Ahmed Ali", "Ali", "Glasgow", "Gym,Football","Following",to_string(100),to_string(60)},
			{"Cristiano Ronaldo", "Ronaldo", "Riyadh", "Football,Gym","Following",to_string(40),to_string(1000000)},
			{"Mona Ahmed", "Mona", "Vancouver", "Food,Yoga","Following",to_string(300),to_string(250)},
			{"Elon Musk", "Elon", "Texas", "Space,Tesla","Following",to_string(200),to_string(200000)},
			{"UN", "UN", "New York", "Health,Education ",to_string(20),to_string(3000)},

};// vector of User which contains the data for each user
vector<User> search_users(string query) {
	vector<User> results; //vector of User that stores results
	//string::npos is static member of string that represents maximum value of element.
for (User user : users) {//using for loop checks each User object in the collection whether containg query string.
	// Query string which values in vector<User> users.
		if (user.name.find(query) != string::npos ||
			user.username.find(query) != string::npos ||
			user.following.find(query) != string::npos ||
			user.Interests.find(query) != string::npos ||
			user.number_followers.find(query) != string::npos ||
			user.number_following.find(query) != string::npos||
            user.location.find(query) != string::npos) {
			results.push_back(user);
		}
	}
	return results;
}







