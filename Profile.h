#pragma once

#include<bits/stdc++.h>
using namespace std;

class Profile{
    private:
    string uname;
    int profile_id;
    static int id;
    string pass;
    string name;
    string DOB;
    string location;
    string occupation;
    string email;
    string mobile;
    string type;
    int age;

    public:
    Profile(){}
    Profile(string s1,string s2,string s3,string s4,string s5,string s6,string s7,string s8,string s9){
        uname = s1;
        pass  = s2;
        name = s3;
        DOB = s4;
        location = s5;
        occupation = s6;
        email = s7;
        mobile = s8;
        type = s9;
        profile_id = id++;
        ageCal(DOB);
    }

    string getusername(){
        return uname;
    }
    string getpass(){
        return pass;
    }
    string getname(){
        return name;
    }
    string gettype(){
        return type;
    }

    void ageCal(string &s){
        s = s.substr(6,s.size());
        int a = 2026-stoi(s);
        this->age = a;
    }

    string getdob(){
        return DOB;
    }

    string getlocation(){
        return location;
    }
     int getage(){
        return age;
    }
    string getemail(){
        return email;
    }
    string getmobile(){
        return mobile;
    }
    void display(){
        
        cout<<"PROFILE_ID :"<<profile_id<<endl;
        cout<<"USER NAME : "<<uname<<endl;
        cout<<"password  : "<<pass<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"D-OF-B :"<<DOB<<endl;
        cout<<"AGE :"<<age<<endl;
        cout<<"location : "<<location<<endl;
        cout<<"email : "<<email<<endl;
        cout<<"mobile : "<<mobile<<endl; 
        cout<<"ACCOUNT TYPE : "<<type<<endl; 
        cout<<endl;
    }
};

int Profile::id=0;