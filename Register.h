#pragma once

#include<bits/stdc++.h>
using namespace std;

class Register{
    private:
    int reg_id;
    static int id;
    string username;
    string password;
    public:
    Register(string user,string pass){
        reg_id = id++;
        username = user;
        password = pass;
    }

    string getuser(){
        return username;
    }
     string getpass(){
        return username;
    }

    int getid(){
        return reg_id;
    }
    string setpassword(string pass){
        password = pass;
    }
};
int Register::id=0;