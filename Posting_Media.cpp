#include "Profiles"
#include "Posting_Media"
#include "follow_list"
using namespace std;
#include <string>
Posting_Media::Posting_Media(){}

Posting_Media::~Posting_Media(){}
int Posting_Media::getnum_likes(){return num_likes;}
void Posting_Media::setnum_likes(int num_likes){this->num_likes = num_likes;}
string Posting_Media::getcomments(){return comments}
void Posting_Media::setcomments(string comments){this->comments = comments;}
char Posting_Media::getshare_to_follow_list(return share_to_follow_list){}
void Posting_Media::setshare_to_follow_list(char share_to_follow_list){this->share_to_follow_list = share_to_follow_list;}
string Posting_Media::getcaption(){return caption;}
void Posting_Media::setcaption(string caption){this->caption=caption;}