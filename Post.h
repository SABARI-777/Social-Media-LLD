#pragma once

#include<bits/stdc++.h>
using namespace std;

class Post{
    private:
    string username;
    int post_id;
    int likes;
    vector<string>comments;
    static int id;
    vector<string>DATAS;
    public:
    Post(string s1,string & s){
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

    int getcomments(){
        return comments.size();
    }

    void setcomments(string &s){
        comments.push_back(s);
    }

    int getid(){
        return post_id;
    }
    void showcomments(){
        for(auto &x:comments){
            cout<<x<<endl;
        }
    }
    void showpost(){
        cout<<"POST_ID : "<<post_id<<endl;
        cout<<"USER NAME :"<<username<<endl;
        cout<<"LIKES :" <<likes<<endl;
        cout<<"COMMENTS :"<<comments.size()<<endl;
        cout<<"POST CONTENTS : "<<endl;
        for(auto &x:DATAS){
            cout<<x<<endl;
        }
        cout<<"COMMENTS : "<<endl;
        for(auto &x:comments){
            cout<<x<<endl;
        }
        cout<<endl;
    }
};
int Post::id=0;