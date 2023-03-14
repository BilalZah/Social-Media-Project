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
    string getPost_name();
    void setPost_name(string);
    void addPost(const std::string& username, const std::string& content);

    // Public member function to retrieve all posts from the newsfeed
    std::vector<std::string> getPosts();
   //vector<string> getPosts;
private:
    vector<string> m_posts;
    string post;
    string post_name;


};