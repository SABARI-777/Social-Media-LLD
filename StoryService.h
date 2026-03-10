#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./Story.h"
#include "./Like.h"
#include "./Comment.h"

class StoryService{
    private:
    static vector<Story>storydata;
    static vector<Like>likedata;
    static vector<Comment>commentdata;
    public:
    StoryService(){}

     void Addstory(string name,string &s){
        Story st(name,s);
        storydata.emplace_back(st);
        cout<<"POST CREATED SUCCESSFULLY "<<endl;
    }

  void addlikes(string uer, int pid){
    bool postFound = false;
    bool alreadyLiked = false;

    for(auto &x : storydata){
        if(x.getid() == pid){
            postFound = true;

             if(x.getuser() == uer){
                cout<<"YOU CANNOT LIKE YOUR OWN POST"<<endl;
                return;
            }

             for(auto &it : likedata){
                if(it.getuser()==uer && it.getpostuser()==x.getuser()){
                    alreadyLiked = true;
                    break;
                }
            }

            if(alreadyLiked){
                cout<<"USER ALREADY LIKED THIS POST"<<endl;
            }
            else{
                Like l(uer, x.getuser());
                likedata.emplace_back(l);
                x.setlikes();
                cout<<"LIKE ADDED SUCCESSFULLY"<<endl;
            }
            return;
        }
    }

    if(!postFound)
        cout<<"POST ID NOT FOUND"<<endl;
}

  void addcomments(string user, int pid, string com){
    bool postFound = false;

    for(auto &x : storydata){
        if(x.getid() == pid){
            postFound = true;


            if(x.getuser() == user){
                cout<<"YOU CANNOT COMMENT YOUR OWN POST"<<endl;
                return;
            }

            Comment c(user, x.getuser());
            commentdata.emplace_back(c);

            x.setcomments(com);
            cout<<"COMMENT ADDED SUCCESSFULLY"<<endl;
            return;
        }
    }

    if(!postFound)
        cout<<"POST ID NOT FOUND"<<endl;
}

    void viewposts(string user){
        for(auto &x:storydata){
            if(x.getuser()==user){
                x.showpost();
                return;
            }
        }
        cout<<"POST NOT FOUND "<<endl;
    }


    void showpost(){
        for(auto &x:storydata){
            x.showpost();
        }
    }
      
    void showpostlikeandcomment(){

        for(auto &x:storydata){
            x.showpost();
            cout<<endl;
            for(auto &it:likedata){
                if(it.getpostuser()==x.getuser()){
                    cout<<"Liked member : " <<it.getuser()<<endl;
                    cout<<"LIKES : "<<it.getlike()<<endl;
                }
            }
            for(auto &it:commentdata){
                if(it.getpostuser()==x.getuser()){
                    cout<<"Commented member : " <<it.getuser()<<endl;
                    cout<<"COMMENTS : "<<it.getcomment()<<endl;
                }
           }
           cout<<endl;
        }
    }
};
vector<Story> StoryService::storydata;
vector<Like> StoryService::likedata;
vector<Comment> StoryService::commentdata;