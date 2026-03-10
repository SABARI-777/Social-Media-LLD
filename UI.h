#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./RegisterUI.h"
#include "./LoginUI.h"


class UI{
    private:
    public:
    UI(){}
    void start(){
       while(true){
        
          cout<<"1. register "<<endl;
          cout<<"2. login "<<endl;
          cout<<"3. exit "<<endl;
           
          int op;
          cin>>op;

          if(op==3)
          {
            cout<<"EXIT...."<<endl;
            break;
          }

          if(op==1){
            RegisterUI r;
            r.start();
          }
          else if(op==2){
            LoginUI l;
            l.start();
          }
       }
    }
};