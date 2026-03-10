#pragma once

#include<bits/stdc++.h>
using namespace std;

class Like{
    private:
    string like_status;
    string user;
    string post_user;
    public:
    Like(string u,string pu){
        user=u;
        post_user=pu;
        like_status="LIKED";
     }

    string getlike(){
        return like_status;
    }
    
    string getuser(){
        return user;
    }
    string getpostuser(){
        return post_user;
    }
};