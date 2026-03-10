#pragma once
#include <bits/stdc++.h>
using namespace std;

void f(){
    cout<<"==========================="<<endl;
}
class Notification{
   static vector<pair<string,string>>postnotify;
   static vector<pair<string,string>>storynotify;
   static vector<pair<string,string>>chatnotify;
   static  vector<pair<string,string>>friendreqnotify;
   static  vector<pair<string,string>>genralnotify;
   public:
    static void addPostNotification(string user, string msg){
         postnotify.push_back({user, msg});
    }
    static void addStoryNotification(string user, string msg){
         storynotify.push_back({user, msg});
    }
    static void addChatNotification(string user, string msg){
            chatnotify.push_back({user, msg});
     }
    static void addFriendReqNotification(string user, string msg){
            friendreqnotify.push_back({user, msg});
     }
    static void addGeneralNotification(string user, string msg){
            genralnotify.push_back({user, msg});
     }
    static void showNotifications(string user){
        f();
        cout<<"Post Notifications:\n";
        for(auto &x : postnotify){
            if(x.first == user) cout<<x.second<<endl;
        }
        f();

        cout<<"\nStory Notifications:\n";
        for(auto &x : storynotify){
            if(x.first == user) cout<<x.second<<endl;
        }
          f();
        cout<<"\nChat Notifications:\n";
        for(auto &x : chatnotify){
            if(x.first == user) cout<<x.second<<endl;
        }
          f();
        cout<<"\nFriend Request Notifications:\n";
        for(auto &x : friendreqnotify){
            if(x.first == user) cout<<x.second<<endl;
        }
          f();
        cout<<"\nGeneral Notifications:\n";
        for(auto &x : genralnotify){
            if(x.first == user) cout<<x.second<<endl;
        }     
          f();   
    }
};
vector<pair<string,string>> Notification::postnotify;
vector<pair<string,string>> Notification::storynotify;
vector<pair<string,string>> Notification::chatnotify;
vector<pair<string,string>> Notification::friendreqnotify;
vector<pair<string,string>> Notification::genralnotify;