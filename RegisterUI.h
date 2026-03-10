#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./Register.h"
#include "./Notification.h"

class RegisterUI{
    static vector<Register>RegisterData;
    public:
    RegisterUI(){}


    void start(){
        while(true){
            cout<<"1. REGISTER USER "<<endl;
            cout<<"2. View USERS "<<endl;
            cout<<"3. exit "<<endl;
            int op;
            cin>>op;
          if(op==3)
          {
            cout<<"EXIT...."<<endl;
            break;
          }
        if(op==1){
        string user,pass;
        cout<<"ENTER USER :"<<endl;
        cin>>user;
        cout<<"ENTER PASSWORD:"<<endl;
        cin>>pass;
        Register r(user,pass);
            Notification n;
            n.addGeneralNotification(user,"REGISTER_NOTIFICATION!!!!!");
        RegisterData.emplace_back(r);
        }
        else if(op==2){
            display();
        }
      }
    }
    
    void display(){
         for(auto &x:RegisterData){
                cout<<"user id : "<<x.getid()<<endl;
                cout<<"user names : "<<x.getuser()<<endl;
        }
    }
    bool check(string s1,string s2){
         for(auto &x:RegisterData){
            if(x.getuser()==s1 && x.getpass()==s2){
                return true;
            }
        }
        return false;
    }   
};
vector<Register> RegisterUI ::RegisterData;
       