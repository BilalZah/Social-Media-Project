#pragma once
#include <iostream>
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"
#include <string>
#include<vector>
using namespace std;
class Newsfeed:public follow_list {
public:
  
    Newsfeed();
    ~Newsfeed();
    
    void addPost(const string& username, const string& content);

    // Public member function to retrieve all posts from the newsfeed
    vector<string> getPosts();
  
private:
    vector<string> m_posts;
    
   


};