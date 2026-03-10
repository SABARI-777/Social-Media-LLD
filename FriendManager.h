#pragma once

#include<bits/stdc++.h>
using namespace std;
#include "./Friend.h"

class FriendManager{
    private:
    static map<string,vector<Friend>>FriendData;
    public:
    

    bool Addfriend(string &s1,string s2){
        Friend f(s1,s2);
        FriendData[s1].push_back(f);
        Friend f1(s2,s1);
        FriendData[s2].push_back(f1);
        return true;
    }

    void display(){
        for(auto &x:FriendData){
            cout<<"USER NAME  "<<x.first<<endl;
             for(auto &y:x.second){
             cout<<"FRIENDS NAME  "<<y.getfriend()<<endl;
             cout<<"TYPE  "<<y.getType()<<endl;
            }
            cout<<endl;
        }
    }

     vector<string> Suggestions(string s){
        vector<string>arr;
        for(auto &x:FriendData){
             for(auto &y:x.second){
                if(y.getfriend()==s){
                    arr.push_back(x.first);
                }
              }
        }
        return arr;
    }

    void displayfriend(string name){
        cout<<"USER NAME :"<<name<<endl;
         for(auto &x:FriendData[name]){
             cout<<"FRIENDS NAME "<<x.getfriend()<<endl;
             cout<<"TYPE "<<x.getType()<<endl;
            }
        cout<<endl;
        return;
    }

    vector<string> getfrd(string name){
        vector<string>arr;
         for(auto &x:FriendData[name]){
             arr.push_back(x.getfriend());
            }
        return arr;
    }
     void Suggestionsdisplay(string name){
         for(auto &x:FriendData[name]){
             cout<<"FRIENDS NAME "<<x.getfriend()<<endl;
            }
        cout<<endl;
        return;
    }

     vector<string> FindMutuaL(string s1,string s2,string s3){
        vector<string>arr;

              for(auto &y:FriendData[s1]){
                  if(y.getfriend()==s2 && y.getfriend()!=s3){
                     arr.push_back(s1);
                  }
         }
        return arr;
    }

    bool check(string &s,string &s1){
         for(auto &x:FriendData){
            for(auto &y:x.second){
                if(y.getfriend()==s){
                    y.setstatus(s1);

            for(auto &z:FriendData){
            for(auto &w:z.second){
                if(w.getfriend()==x.first){
                    w.setstatus(s1);
                    return true;
                }
            }
          }
        }
       } 
     }
     return false;
   }

  void removefriend(string s, string s1) {
    auto &friends = FriendData[s];

    for (int i = 0; i < friends.size(); i++) {
        if (friends[i].getfriend() == s1) {
            friends.erase(friends.begin() + i);
            break; 
        }
      }
    }
};
map<string,vector<Friend>> FriendManager::FriendData;