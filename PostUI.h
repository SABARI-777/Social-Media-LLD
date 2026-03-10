#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./PostService.h"  
#include "Notification.h"
#include "./FriendManager.h"

class PostUI{
    private:
     public:
    PostUI(){}

    void start(string &s1){
        PostService ps;
        while(true){
            cout<<"1. CREATE POST "<<endl;
            cout<<"2. ADD LIKES "<<endl;
            cout<<"3. ADD COMMENTS "<<endl;
            cout<<"4. VIEW POST "<<endl;
            cout<<"5. VIEW ALL POSTS "<<endl;
            cout<<"6. VIEW POSTS WITH LIKES AND COMMENTS"<<endl;
            cout<<"7. EXIT "<<endl;

            int choice;
            cin>>choice;

            if(choice==1){
                cout<<"YOUR USERNAME IS :"<<s1<<endl;
                cout<<"ENTER CONTENTS IN SINGLE LINE (POST) :"<<endl;
                    string s;
                    cin>>s;
                    ps.AddPost(s1,s);
                    Notification n;
                    FriendManager m;
                    vector<string> arr = m.getfrd(s1);
                    string mess = "POST_NOTIFY FROM " + s1;

                    for(auto &x:arr){
                        n.addPostNotification(x,mess);
                    }
                    n.addPostNotification(s1,"POST_NOTIFICATION!!!!!");
                }
    else if(choice==2){
    int pid;
    cout<<"ENTER POST ID TO LIKE:"<<endl;
    cin>>pid;
    Notification n;
    n.addPostNotification(s1,"POST_LIKE_NOTIFICATION!!!!!");
    ps.addlikes(s1, pid);
            }
  else if(choice==3){
    int pid;
    string com;

    cout<<"ENTER POST ID TO COMMENT:"<<endl;
    cin>>pid;
     Notification n;
    n.addPostNotification(s1,"POST_COMMENT_NOTIFICATION!!!!!");
    cout<<"ENTER COMMENT:"<<endl;
    cin>>com;

    ps.addcomments(s1, pid, com);
}           else if(choice==4){
                string name;
                cout<<"ENTER USER NAME :"<<endl;
                cin>>name;
                ps.viewposts(name);
            }
            else if(choice==5){
                ps.showpost();
            }
            else if(choice==6){
                ps.showpost();
                cout<<"ENTER POST ID :"<<endl;
                int id;
                cin>>id;
                ps.showpostlikeandcomment(id);
            }
            else{
                cout<<"EXIT....."<<endl;
                break;
            }
        }
    }
   
};