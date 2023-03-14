#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Profiles.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/Posting_Media.h"
#include "C:\Users\Dell\Documents\GitHub\Social-Media-Project/follow_list.h"
using namespace std;
#include <string>
Posting_Media::Posting_Media():Profiles() {}

Posting_Media::~Posting_Media(){}
int Posting_Media::getnum_likes(){return num_likes;}
void Posting_Media::setnum_likes(int num_likes){this->num_likes = num_likes;}
string Posting_Media::getcomments() { return comments; }
void Posting_Media::setcomments(string comments){this->comments = comments;}
char Posting_Media::getshare_to_follow_list() { return share_to_follow_list; }
void Posting_Media::setshare_to_follow_list(char share_to_follow_list){this->share_to_follow_list = share_to_follow_list;}
string Posting_Media::getcaption(){return caption;}
void Posting_Media::setcaption(string caption){this->caption=caption;}

string Posting_Media::getpost() { return post; }
void Posting_Media::setPost(string post) { this->post= post; }

int Posting_Media::getnum_comments() { return num_comments; }
void Posting_Media::setnum_comments(int num_comments) { this->num_comments = num_comments; }
