#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./StoryService.h"  
#include "./FriendManager.h"
#include "./Notification.h"

class StoryUI{
    private:
     public:
    StoryUI(){}

    void start(string &s1){
        StoryService ss;
        while(true){
            cout<<"1. CREATE STORY "<<endl;
            cout<<"2. ADD LIKES "<<endl;
            cout<<"3. ADD COMMENTS "<<endl;
            cout<<"4. VIEW STORYS  "<<endl;
            cout<<"5. VIEW ALL STORYS "<<endl;
            cout<<"6. VIEW STORYS WITH LIKES AND COMMENTS"<<endl;
            cout<<"7. EXIT "<<endl;

            int choice;
            cin>>choice;

            if(choice==1){
                cout<<"YOUR USERNAME IS :"<<s1<<endl;
                cout<<"ENTER CONTENTS IN SINGLE LINE (POST) :"<<endl;
                    string s;
                    cin>>s;
                    ss.Addstory(s1,s);
                     Notification n;
                    FriendManager m;
                    vector<string> arr = m.getfrd(s1);
                    string mess = "STORY_NOTIFY FROM " + s1;
                    
                    for(auto &x:arr){
                        n.addPostNotification(x,mess);
                    }
                    n.addStoryNotification(s1,"STORY_NOTIFICATION!!!!!");
                }
    else if(choice==2){
    int pid;
    cout<<"ENTER POST ID TO LIKE:"<<endl;
    cin>>pid;
    ss.addlikes(s1, pid);
            }
  else if(choice==3){
    int pid;
    string com;

    cout<<"ENTER POST ID TO COMMENT:"<<endl;
    cin>>pid;

    cout<<"ENTER COMMENT:"<<endl;
    cin>>com;

    ss.addcomments(s1, pid, com);
}           else if(choice==4){
                string name;
                cout<<"ENTER USER NAME :"<<endl;
                cin>>name;
                ss.viewposts(name);
            }
            else if(choice==5){
                ss.showpost();
            }
            else if(choice==6){
                ss.showpostlikeandcomment();
            }
            else{
                cout<<"EXIT....."<<endl;
                break;
            }
        }
    }
   
};