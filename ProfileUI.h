#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./RegisterUI.h"
#include "./Profile.h"
#include "./Notification.h"



class ProfileUI{
    private:
    RegisterUI r;
    static vector<Profile>ProfileData;
    public:
    ProfileUI(){}

    void start(){
         while(true){
        cout<<"ENTER YOUR OPTIONS :"<<endl;
        cout<<"1.CREATE PROFILE "<<endl;
        cout<<"2. VIEW MY PROFILES "<<endl;
        cout<<"3. VIEW ALL PROFILES "<<endl;
        cout<<"4. REMOVE PROFILE "<<endl;
        cout<<"5. EXIT "<<endl;
        
        int op;
        cin>>op;
        
        if(op==5)
        {
            cout<<"EXIT..."<<endl;
            break;
        }
        else if(op==1){
            string s1,s2,s3,s4,s5,s6,s7,s8,s9;
            cout<<"ENTER USERNAME "<<endl;
            cin>>s1;
            cout<<"ENTER PASSWORD "<<endl;
             cin>>s2;
            cout<<"ENTER NAME "<<endl;
             cin>>s3;
            cout<<"ENTER DOB (24-11-2005)"<<endl;
             cin>>s4;
            cout<<"ENTER LOCATION "<<endl;
             cin>>s5;
            cout<<"ENTER OCCUPATION "<<endl;
             cin>>s6;
            cout<<"ENTER Email "<<endl;
             cin>>s7;
            cout<<"ENTER MOBILE "<<endl;
            cin>>s8;
            cout<<"ENTER ACCOUNT TYPE (PUBLIC OR PRIVATE) "<<endl;
            cin>>s9;
            if(r.check(s1,s2)){
                Profile p(s1,s2,s3,s4,s5,s6,s7,s8,s9);
                ProfileData.emplace_back(p);
                cout<<"PROFILE CREATE SUCCESSFULLY "<<endl;
                p.display();
                Notification n;
                n.addGeneralNotification(s1,"PROFILE_CREATED_NOTIFICATION!!!!!");
                
              }
              else{
                cout<<"USER NAME OR PASSWORD WRONG ?"<<endl;
              }
        }
        else if(op==2){
            string s1,s2;
            cout<<"ENTER USERNAME "<<endl;
            cin>>s1;
            cout<<"ENTER PASSWORD "<<endl;
            cin>>s2;
            bool f = true;
              for(auto &x:ProfileData){
                if(x.getusername()==s1 && x.getpass()==s2){
                    x.display();
                    f = false;
                    break;
                }
            }
            if(f){
                cout<<"NO DATA FOUND "<<endl;
            }
        }
        else if(op==3){
            for(auto &x:ProfileData){
                if(x.gettype()=="PUBLIC")
                cout<<"USERNAME :"<<x.getusername()<<endl;
                cout<<"NAME : "<<x.getname()<<endl;
                cout<<"ACCOUNT TYPE : "<<x.gettype()<<endl;
            }
        }
        else{
            string s1,s2;
            cout<<"ENTER USERNAME "<<endl;
            cin>>s1;
            cout<<"ENTER PASSWORD "<<endl;
            cin>>s2;
            bool f=true;
            for(int i=0;i<ProfileData.size();i++){
                if(ProfileData[i].getusername()==s1 && ProfileData[i].getpass()==s2){   
                       f = false;
                       ProfileData.erase(ProfileData.begin()+i);
                       cout<<"PROFILE REMOVED SUCCESSFULLY !!!!"<<endl;
                        Notification n;
                        n.addGeneralNotification(s1,"PROFILE_REMOVED_NOTIFICATION!!!!!");
                    break;
                 }
            
            if(f){
                cout<<"NO DATA FOUND "<<endl;
            }
           }
        }
    }
}
    bool validate(string s){
        for(auto x:ProfileData){
            if(x.getusername()==s) return true;
        }
        return false;
    }
};
vector<Profile>ProfileUI::ProfileData;