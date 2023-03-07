#pragma once

#include<string>
#include<iostream>
#include  "Profiles.h"




using namespace std;
int main() {

	char ans;

	std::cout<< "Do you want to create an account(Y/N) ? " << endl;
	cin >> ans;


	if (ans == 'Y') {
		Profiles s;

		s.setemail_address("adamtaher2004@gmail.com");

		cout << s.getemail_address() << endl;
		s.setUser_name("adam");

		cout << s.getUser_name() << endl;
		s.setdob_day(22);

		std::cout << s.getdob_day();

		s.setdob_month(7);

		cout << s.getdob_month();

		s.setdob_year(2004);

			cout << s.getdob_year()<<endl;
			
			
			s.setPassword(12345);

			cout << s.getPassword() << endl;
			s.setProfile_Photo("https://getwallpapers.com/image/eyJpdiI6IjUweVoxcTRyWDd3S0kwK1h1Z2hYMmc9PSIsInZhbHVlIjoidG1saDZJZ1AzWVdnUStZckRIKzhSQT09IiwibWFjIjoiNzY2YjA5MTI4NTc3N2U5YmE0NjY0OTU1MGJlOTA1YzhkMmM1OGJiYTQ3ZDE3NTI1Mzg0ZDU5OGM2NWIxNjM1MyJ9");



			cout << s.getProfile_Photo() << endl;

			//Messaging j;
			//cout << j.getcomments() << endl;
			//j.setcomments("Hi Bilal");

	}
	
else if (ans == 'N') {
cout << "Continue as a guest ";


		}
	Messaging j;
	cout << j.getcomments() << endl;
	j.setcomments("Hi Bilal");
		
	}

	
	


	
