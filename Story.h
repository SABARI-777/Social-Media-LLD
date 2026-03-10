#pragma once

#include<bits/stdc++.h>
using namespace std;

class Story{
    private:
    string username;
    int post_id;
    int likes;
    vector<string>comments;
    static int id;
    vector<string>DATAS;
    public:
    Story(string s1,string & s){
        username = s1;
        post_id = id++;
        likes=0;
        DATAS.push_back(s);
    }

    string getuser(){
        return username;
    }
    vector<string> getdata(){
        return DATAS;
    }
    void setlikes(){
        likes++;
    }
    int getlikes(){
        return likes;
    }
    vector<string> getcommets(){
        return comments;
    }

    void setcomments(string &s){
        comments.push_back(s);
    }

    int getid(){
        return post_id;
    }
    void showpost(){
        cout<<"STORY_ID : "<<post_id<<endl;
        cout<<"USER NAME :"<<username<<endl;
        cout<<"LIKES :" <<likes<<endl;
        cout<<"COMMENTS :"<<comments.size()<<endl;
        cout<<"STORY CONTENTS : "<<endl;
        for(auto &x:DATAS){
            cout<<x<<endl;
        }
        cout<<endl;
    }
};
int Story::id=0;