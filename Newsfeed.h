#pragma once
class Newsfeed :public Profiles, public follow_list, public search_function {
public:
    char get_share_to_follow_list();
    void get_share_to_follow_list(char);



private:
    char get_share_to_follow_list;




};