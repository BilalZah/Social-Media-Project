#include<string>
#include<iostream>
#include<vector>
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Subscription.h"
#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Security.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Messaging.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Posting_Media.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Newsfeed.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Search_function.h"
#include<cstdlib>

using namespace std;

int main() {

	string User_name;
	char ans;
	string email_address;
	int dob_day;
	int dob_month; int dob_year; int password;

	cout << "Do you want to create an account(Y/N) ? " << endl;
	cin >> ans;

	if (ans == 'Y') {
		Profiles Adam_profile;
		Security adam;
		follow_list adam_profile;

		cout << "User_ name:";
		cin >> User_name;
		cout << "Email address:";
		cin >> email_address;
		cout << "dob_day:";
		cin >> dob_day;
		cout << "dob_month:";
		cin >> dob_month;
		cout << "dob_year:";
		cin >> dob_year;
		cout << "Password:";
		cin >> password;

		adam.setphone_number(445768474);
		cout << "phone number:";
		cout << adam.getphone_number() << endl;
		adam.set2FA(8934);
		cout << "Hi user your 2FA code is:";
		cout << adam.get2FA() << endl;//2FA
		adam_profile.setProfile_Photo("https://getwallpapers.com/image/eyJpdiI6IjUweVoxcTRyWDd3S0kwK1h1Z2hYMmc9PSIsInZhbHVlIjoidG1saDZJZ1AzWVdnUStZckRIKzhSQT09IiwibWFjIjoiNzY2YjA5MTI4NTc3N2U5YmE0NjY0OTU1MGJlOTA1YzhkMmM1OGJiYTQ3ZDE3NTI1Mzg0ZDU5OGM2NWIxNjM1MyJ9");
		cout << User_name << " Public " << " Profile Photo" << endl;
		cout << adam_profile.getProfile_Photo() << endl;//Profile photo
		{

			system("Ronaldo.jpg");
		}
		adam_profile.setnumber_followers(200);
		cout << "Number followers:";
		cout << adam_profile.getnumber_followers() << endl;// number of folloers
		adam_profile.setnumber_following(80);
		cout << "Number following:";
		cout << adam_profile.getnumber_following() << endl;// number of following
		adam_profile.setBio("Bio: I love playing football");
		cout << adam_profile.getBio() << endl;//Bio
		adam_profile.setInterests("Interests: Sports , Food");
		cout << adam_profile.getInterests() << endl;//Interests

		Posting_Media Adam;

		cout << " Posts" << endl;
		Adam.setcaption("Messi");
		cout << "Caption:";
		cout << Adam.getcaption() << endl;//Caption

		{
			system("Messi.jpg");
		}
		Adam.setPost("https://sharondurs2000.blogspot.com/2021/08/leo-messi-leo-messis-most-famous-goal.html");
		cout << Adam.getpost() << endl;//Post link
		Adam.setlike_button("http://clipart-library.com/clip-art/facebook-like-icon-transparent-19.htm");
		cout << Adam.getlike_button() << endl;//like button
		{
			system("like_button.jpg");
		}
		Adam.setnum_likes(20);
		cout << "num_likes:";
		cout << Adam.getnum_likes() << endl;// Number of likes
		Adam.setnum_comments(2);
		//cout << "Comments:";
		string comment{ "" };
		getline(cin, comment);
		cout << "comment:" << "";
		getline(cin, comment);
		cout << "comment:" << "";
		getline(cin, comment);
		// Another user created 
		Profiles Yousef_profile;
		follow_list yousef_profile;

		cout << "User_ name:";
		cin >> User_name;
		cout << "Email address:";
		cin >> email_address;
		cout << "dob_day:";
		cin >> dob_day;
		cout << "dob_month:";
		cin >> dob_month;
		cout << "dob_year:";
		cin >> dob_year;
		cout << "Password:";
		cin >> password;




		cout << User_name << " Private Account " << endl;
		yousef_profile.setnumber_followers(300);
		cout << "Number followers:";
		cout << yousef_profile.getnumber_followers() << endl;// number of folloers
		yousef_profile.setnumber_following(10);
		cout << "Number following:";
		cout << yousef_profile.getnumber_following() << endl;// number of following
		Yousef_profile.setInterests("Interests: Football , Gaming");
		cout << Yousef_profile.getInterests() << endl;//Interests


		Profiles Salah_profile;
		follow_list salah_profile;

		cout << "User_ name:";
		cin >> User_name;
		cout << "Email address:";
		cin >> email_address;
		cout << "dob_day:";
		cin >> dob_day;
		cout << "dob_month:";
		cin >> dob_month;
		cout << "dob_year:";
		cin >> dob_year;
		cout << "Password:";
		cin >> password;


		cout << User_name << " Public Account " << endl;
		Salah_profile.setProfile_Photo("https://www.sportingnews.com/ca/soccer/news/mohamed-salah-chases-new-premier-league-record/yoc4hk59r6pk12fo2ccleev8j");
		cout << "Profile Photo:";
		cout << Salah_profile.getProfile_Photo() << endl;
		salah_profile.setnumber_followers(400);
		cout << "Number followers:";
		cout << yousef_profile.getnumber_followers() << endl;// number of folloers
		salah_profile.setnumber_following(10);
		cout << "Number following:";
		cout << salah_profile.getnumber_following() << endl;// number of following

		Salah_profile.setInterests("Interests: Football , Gym");
		cout << Salah_profile.getInterests() << endl;//Interests



		Newsfeed feed;
		cout << "Newsfeed" << endl;
		feed.addPost("NBC News", "https://www.msn.com/en-us/tv/news/rhett-link-s-mythical-launches-24-hour-free-streaming-channel-on-roku/ar-AA18CReS");//Newsfeed post 1
		feed.addPost("FIFA", "https://www.fifa.com/all-stories"); //Newsfeed post 2
		feed.addPost("BBC NEWS", "https://www.bbc.co.uk/news/av/uk-48811952");//Newsfeed post 3
		vector<string> posts = feed.getPosts();
		for (string post : posts) {

			cout << post << endl;
			cout << " following" << endl;
		}

		//search function 
		string query;
		cout << "Search: ";
		cin >> query;
		vector<User> results = search_users(query);
		if (results.empty()) {
			cout << "No results found" << endl;//Nothing will be printed 
		}
		else {
			cout << "Results:" << endl;// print out results name,username,location and interests
			for (User user : results) {
				cout << "Name: " << user.name << endl;
				cout << "Username: " << user.username << endl;
				cout << "Location: " << user.location << endl;
				cout << "Interests: " << user.Interests << endl;
				cout << "Number of following: " << user.number_following << endl;
				cout << "Number of followers: " << user.number_followers << endl;
				cout << "" << user.following << endl;
				cout << endl;
			}
		}

		Subscription bilal_subscription;
		Profiles bilal;
		follow_list bilal_follow;

		bilal.setUser_name("Bilal");
		cout << bilal.getUser_name() << endl; cout << "Public Account" << endl;//User name and Public account
		cout << "Profile Photo:";
		bilal.setProfile_Photo("https://wallpapercave.com/gym-equipment-wallpapers");
		cout << bilal.getProfile_Photo() << endl;//Profile photo
		{

			system("gym.jpg");
		}

		bilal_follow.setnumber_followers(3000);
		cout << "Number_followers:";
		cout << bilal_follow.getnumber_followers() << endl;// number of followers
		bilal_follow.setnumber_following(20);
		cout << "Number_following:";
		cout << bilal_follow.getnumber_following() << endl;//number of following
		cout << "Subscription_price:";

		bilal_subscription.setsubscription_price(8.99);

		cout << bilal_subscription.getsubscription_price() << endl;//subscription price

		cout << "Do you want to subscribe to my account(Y/N) ? " << endl;
		cin >> ans;
		if (ans == 'Y') {
			bilal_subscription.setaccountNumber(23456789);
			cout << "account_number:";
			cout << bilal_subscription.getaccountNumber() << endl;
			bilal_subscription.setSortCode(123456);
			cout << "sort_code:";
			cout << bilal_subscription.getSortCode() << endl;// sort code
			bilal_subscription.setbalance(800);
			double balance{ 800.00 };
			double subscription_price{ 8.99 };
			if (balance > subscription_price) {
				bilal_subscription.setbalance(800);
				cout << "balance: ";
				cout << bilal_subscription.getbalance() << endl;//balance
				cout << "Subscription_price:";
				bilal_subscription.setsubscription_price(8.99);
				cout << bilal_subscription.getsubscription_price() << endl;
				cout << "Subscribed" << endl;
			}
			else {
				cout << "no funds" << endl;
			}
		}
		else if (ans == 'N') {
			cout << "Exit page" << endl;
		}
		Messaging z;
		follow_list talal_follow;
		z.setUser_name("talal");

		cout << z.getUser_name();// User name
		cout << " Private Account" << endl;
		z.setProfile_Photo("https://wall.alphacoders.com/big.php?i=990125");
		cout << "Profile Photo:";
		cout << z.getProfile_Photo() << endl;//Profile photo
		{
			system("salah.jpg");
		}
		talal_follow.setnumber_followers(100);
		cout << "Number followers:";
		cout << talal_follow.getnumber_followers() << endl;// number of following
		talal_follow.setnumber_following(10);
		cout << "Number Following:";
		cout << talal_follow.getnumber_following() << endl;// number of followers

		z.setGroup_name("Year 2 EEE");
		cout << "Group name:";
		cout << z.getGroup_name() << endl;// group name
		z.setGroup_members(10);
		cout << "Group members:";
		cout << z.getGroup_members() << endl;//group members
		
		 // comments in group 
		string comments{ "" };
		getline(cin, comments);
		cout<<"Adam " << "comment:" << "";
		getline(cin, comments);
		cout<<"Adam " << "comment:" << "";
		getline(cin, comments);
		cout<<"Bilal " << "comment:" << "";
		getline(cin, comments);
		z.setlike_button("http://clipart-library.com/clip-art/facebook-like-icon-transparent-19.htm");
		cout << z.getlike_button() << endl;//like button
		{
			system("like_button.jpg");
		}
		z.setnumber_of_likes(9);
		cout << "number of likes:";
		cout << z.getnumber_of_likes() << endl;// number of likes to last comment in the chat
		z.setshare("https://www.msn.com/en-ca/sports/soccer/barcelona-2-1-real-madrid-player-ratings-as-barca-take-12-point-lead-in-la-liga/ar-AA18PoX2");
		cout << "Shared iamge:";
		cout << z.getshare() << endl;//shared image in group chat
		{
			system("barca_win.jpg");
		}
		follow_list Ru_follow;
		Profiles Ru;
		cout << "Profile:";
		Ru.setUser_name("Ru");

		cout << Ru.getUser_name() << endl;// username
		cout << "Private Account" << endl;
		Ru_follow.setnumber_followers(100);
		cout << "Number followers:";
		cout << Ru_follow.getnumber_followers() << endl;// number of followers
		Ru_follow.setnumber_following(50);
		cout << "Number following:";
		cout << Ru_follow.getnumber_following() << endl;// number of following

		// this code below shows when Ru has followed an account so his number following increased by one 
		int number_following{ 50 };
		int num{ 0 };
		char answer;

		cout << "Do you want to follow Ru (Y/N) ? " << endl;
		cin >> answer;
		if (answer == 'Y') {
			do
			{
				number_following++;

				cout << "Number following:" << number_following;
			} while (number_following < 1);
		}

		else if (answer == 'N') {
			cout << "Exit page" << endl;
		}
		
	}
	 else if (ans == 'N') {
	cout << "Exit Social Media Platform " << endl;
		}
}
	
	
	

		

	
