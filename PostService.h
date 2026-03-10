#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./Post.h"
#include "./Like.h"
#include "./Comment.h"

class PostService{
    private:
    static vector<Post>PostData;
    static vector<Like>likedata;
    static vector<Comment>commentdata;
    public:
    PostService(){}

    

     void AddPost(string name,string &s){
        Post p(name,s);
        PostData.emplace_back(p);
        cout<<"POST CREATED SUCCESSFULLY "<<endl;
    }

  void addlikes(string uer, int pid){
    bool postFound = false;
    bool alreadyLiked = false;

    for(auto &x : PostData){
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

    for(auto &x : PostData){
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
        for(auto &x:PostData){
            if(x.getuser()==user){
                x.showpost();
                return;
            }
        }
        cout<<"POST NOT FOUND "<<endl;
    }


    void showpost(){
        for(auto &x:PostData){
            x.showpost();
        }
    }
      
    void showpostlikeandcomment(int &id){
        bool f = false;
        for(auto &x:PostData){
            if(x.getid()==id){
                f = true;
            x.showpost();
            cout<<endl;

            cout<<"TOTAL LIKES : "<<x.getlikes()<<endl; 
             cout<<"TOTAL comments : "<<x.getcomments()<<endl; 
            for(auto &it:likedata){
                if(it.getpostuser()==x.getuser()){
                    cout<<"Liked members : " <<it.getuser()<<endl;
                }
            }
            for(auto &it:commentdata){
                if(it.getpostuser()==x.getuser()){
                    cout<<"Commented member : " <<it.getuser()<<endl;
                    cout<<"COMMENTS : "<<endl;
                    x.showcomments();
                }
           }
        }
        if(f==false){
            cout<<"NO POST FOR THIS ID "<<endl;
        }
           cout<<endl;
        }
    }
};
vector<Post> PostService::PostData;
vector<Like> PostService::likedata;
vector<Comment> PostService::commentdata;