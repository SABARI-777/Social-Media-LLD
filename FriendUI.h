#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./ProfileUI.h"
#include "./FriendManager.h"
#include "./Notification.h"

class FriendUI{
    ProfileUI P;
    FriendManager F;
    public:
    FriendUI(){}

    void start(string &s){

        while(true){
            int op;
            cout<<"1.ADD FRIEND "<<endl;
            cout<<"2. view friends "<<endl;
            cout<<"3. Friend Suggestion "<<endl;
            cout<<"4. ACCEPT OR REJECT "<<endl;
            cout<<"5. REMOVE FRIEND "<<endl;
            cout<<"6. Mutual  Friends "<<endl;
            cout<<"7. exit "<<endl;

            cin>>op;
          if(op==7){
            cout<<"EXIT... "<<endl;
            break;
          } 
        if(op==1){ 
        cout<<"ENTER FRIEND USERNAME "<<endl;
        string s1;
        cin>>s1;
          if(P.validate(s1)){
             F.Addfriend(s,s1);
                Notification n;
                n.addFriendReqNotification(s1,"FRIEND_REQ_NOTIFICATION!!!!!");
            cout<<"FRIEND REQUESTED SUCCESSFULLY "<<endl;
         }
        }
        else if(op==2){
            F.displayfriend(s);
        }
        else if(op==3){
            vector<string>arr = F.Suggestions(s);
            for(auto &x:arr){
                 F.Suggestionsdisplay(x);
            }
        }
        else if(op==4){
            F.display();
            // cout<<endl;
            string s1;
            cout<<"ENTER STATUS (FOLLOW OR UNFOLLOW) : "<<endl;
            cin>>s1;
            Notification n;
            if(F.check(s,s1)){
                n.addGeneralNotification(s,"FRIEND_STATUS_CHANGED!!!!!");
                cout<<"FOLLOW ACCEPTED "<<endl;
            }
            else{
                 n.addGeneralNotification(s,"FRIEND_STATUS_CHANGED!!!!!");
                cout<<"FOLLOW REJECTED "<<endl;
            }
        }
        else if(op==5){ 
        cout<<"ENTER FRIEND USERNAME "<<endl;
        string s1;
        cin>>s1;
          if(P.validate(s1)){
             F.removefriend(s,s1);
                Notification n;
                n.addGeneralNotification(s,"FRIEND_REMOVED!!!!!");
                 n.addGeneralNotification(s1,"FRIEND_REMOVED!!!!!");
            cout<<"FRIEND REMOVED SUCCESSFULLY "<<endl;
         }
        }
        else if(op==6){
            cout<<"ENTER SEARCH PROFILE : "<<endl;
            string s1;
            cin>>s1;
            //  n.addGeneralNotification(s,"FRIEND_STATUS_CHANGED!!!!!");

            vector<string>arr = F.Suggestions(s);
             vector<string>arr1;
            for(auto &x:arr){
                arr1 =  F.FindMutuaL(x,s1,s);
            }

            cout<<"MUTUAL FRIENDS"<<endl;
            for(auto &x:arr1){
                F.displayfriend(x);
            }
        }
      }  
    }
};
