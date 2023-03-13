#pragma once
#include <iostream>

#include <string>
using namespace std;
class Newsfeed {
public:
  
    Newsfeed() {}
    ~Newsfeed() {}
    string getPost_name();
    void setPost_name(string);
    string getPost();
    void setPost(string);

private:
 
    string post;
    string post_name;


};