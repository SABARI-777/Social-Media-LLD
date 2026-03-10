#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./RegisterUI.h"
#include "./Login.h"
#include "./Notification.h"

class LoginUI{
    private:
    public:
    LoginUI(){}
    void start(){
    string s1,s2;
    cout<<"ENTER USERNAE :"<<endl;
    cin>>s1;

    cout<<"ENTER PASSWORD :"<<endl;
    cin>>s2;
    RegisterUI r;
    
    Notification n;
    if(r.check(s1,s2)){
            cout<<"LOGIN SUCCESSFULYY !!"<<endl;
            Login l;
            n.addGeneralNotification(s1,"LOGIN_NOTIFICATION!!!!!");
            l.start(s1);
        }
        else{
            cout<<"USERNAME AND PASSWORD WRONG ?"<<endl;
        }
    }  
};