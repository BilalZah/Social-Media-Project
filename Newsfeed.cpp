#include"C:\Users\Dell\Documents\GitHub\Social-Media-Project/Newsfeed.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"

using namespace std;
#include<vector>
#include<string>


#include<string>
Newsfeed::Newsfeed():follow_list(){}
Newsfeed::~Newsfeed() {}
//m_posts.push_back("          ") 
//vector<std::string> Newsfeed::getPot}
void Newsfeed::addPost(const std::string& username, const std::string& content) {
    // Add the post to m_posts vector
    m_posts.push_back("@" + username + " " + content);
}

// Retrieve all posts from the newsfeed
std::vector<std::string> Newsfeed::getPosts() {
    return m_posts;
}



string Newsfeed::getPost_name() { return post_name; }
void Newsfeed::setPost_name(string post_name) { this->post_name = post_name; }


