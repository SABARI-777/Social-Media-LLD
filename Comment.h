#pragma once

#include<bits/stdc++.h>
using namespace std;


class Comment{
    private:
    string comment_status;
    string user;
    string post_user;
    public:
    Comment(string u,string pu){
        user=u;
        post_user=pu;
         comment_status="COMMENTED";
    }

    string getcomment(){
        return comment_status;
    }
    string getuser(){
        return user;
    }
    string getpostuser(){
        return post_user;
    }
};