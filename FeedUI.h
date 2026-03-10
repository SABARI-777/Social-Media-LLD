#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./PostService.h"
#include "./Notification.h"


class Feed{
  private:
  PostService ps;
  public:
  Feed(){}

  void start(string s1){
      while(true){
    cout<<"ENTER OPTIONS :"<<endl;
    cout<<"1. VIEW ALL POSTS "<<endl;
    cout<<"2. ADD LIKE "<<endl;
    cout<<"3. ADD COMMENT "<<endl;
    cout<<"4 .VIEW POST WITH LIKES AND COMMENTS "<<endl;
    cout<<"5. EXIT "<<endl;
    int op;
    cin>>op;

    if(op==5){
        cout<<"EXIT...."<<endl;
        break;
    }
    else if(op==1){

     ps.showpost();   
    }
    else if(op==2){
    int pid;
    cout<<"ENTER POST ID TO LIKE:"<<endl;
    cin>>pid;
    Notification n;
    n.addPostNotification(s1,"FEED_POST_LIKE_NOTIFICATION!!!!!");
    ps.addlikes(s1, pid);
  }
  else if(op==3){
    int pid;
    string com;

    cout<<"ENTER POST ID TO COMMENT:"<<endl;
    cin>>pid;

    cout<<"ENTER COMMENT:"<<endl;
    cin>>com;
    Notification n;
    n.addPostNotification(s1,"FEED_POST_COMMENT_NOTIFICATION!!!!!");
    ps.addcomments(s1, pid, com);
  }
  else if(op==4){
      ps.showpost();
                cout<<"ENTER POST ID :"<<endl;
                int id;
                cin>>id;
                ps.showpostlikeandcomment(id);
  }
   }
 }
};