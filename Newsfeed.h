#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Newsfeed {
public:
   Newsfeed();
   ~Newsfeed();
    void addPost(const string& username, const string& content);

    // Public member function to retrieve all posts from the newsfeed
    vector<string> getPosts();
 
private:
    vector<string> m_posts;// vecoter string that stores all posts
    };