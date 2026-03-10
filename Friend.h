#pragma once

#include<bits/stdc++.h>
using namespace std;

class Friend{
    string user;
    string friends;
    static int id;
    string type;
    int friend_id;
    public:
    Friend(string s1,string s2){
       // status = true;
        user = s1;
        friends = s2;
        type = "PENDING";
        friend_id = id++;
    }

    void setstatus(string &s) {
        this->type = s;
    }

    string getuser(){
        return user;
    }
    string getfriend(){
        return friends;
    }
    int getid(){
        return friend_id;
    }

    string getType(){
        return type;
    }
};
int Friend::id=0;