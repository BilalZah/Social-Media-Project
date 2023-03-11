//#include"C:\Users\Dell\Documents\GitHub\Social - Media - Project /Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project /Messaging.h"
using namespace std;
#include<string>
Messaging::Messaging() {}

Messaging::~Messaging() {}
string Messaging::getcomments() { return comment; }
void  Messaging::setcomments(string comments) { this->comment = comment; }
int Messaging::getnumber_of_likes() { return number_of_likes; }
void  Messaging::setnumber_of_likes(int number_of_likes) { this->number_of_likes = number_of_likes; }
char Messaging::getlike_button() { return like_button; }
void  Messaging::setlike_button(char like_button) { this->like_button = like_button; }

