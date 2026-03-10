#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./ProfileUI.h"
#include "./FriendUI.h"
#include "./PostUI.h"
#include "./StoryUI.h"
#include "./FeedUI.h"
#include "./ChatUI.h"
#include "./NotificationUI.h"

class Login{
    private:
    public:
    Login(){}


    void start(string &s1){
        while(true){
        cout<<"ENTER YOUR OPTIONS :"<<endl;
        cout<<"1.PROFILE UI "<<endl;
        cout<<"2. FRIENDS UI"<<endl;
        cout<<"3. FEED UI "<<endl;
        cout<<"4. STORY UI "<<endl;
        cout<<"5. CHAT UI "<<endl;
        cout<<"6. NOTIFICATION UI "<<endl;
        cout<<"7. POST UI "<<endl;
        cout<<"8. EXIT "<<endl;

        int op;
        cin>>op;

        if(op==8){
            cout<<"EXIT ...."<<endl;
            break;
        }
        else if(op==1){
            ProfileUI p;
            p.start();
        }
        else if(op==2){
            FriendUI f;
            f.start(s1);
        }
        else if(op==3){
            Feed feed;
            feed.start(s1);
        }
        else if(op==4){
            StoryUI s;
            s.start(s1);
        }
        else if(op==5){
            ChatUI ch;
            ch.start(s1);
        }
        else if(op==6){
            NotificationUI n;
            n.start(s1);
        }
        else if(op==7){
            PostUI P;
            P.start(s1);
        }
      }
    }
};