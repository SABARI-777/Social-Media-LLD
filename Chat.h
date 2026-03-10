#pragma once
#include<bits/stdc++.h>
using namespace std;

class ChatService{
private:
    static map<pair<string,string>, vector<string>> chatdatas;

    pair<string,string> makeKey(string a, string b){
        if(a < b) return {a,b};
        return {b,a};
    }

public:
    void sendMessage(string sender, string receiver, string message){
        pair<string,string> key = makeKey(sender, receiver);
        string fullmsg = sender + " : " + message;
        chatdatas[key].push_back(fullmsg);
    }

    void showUserChats(string user){
        bool found = false;
        for(auto &x : chatdatas){
            if(x.first.first == user || x.first.second == user){
                cout<<"\nChat with: ";
                if(x.first.first == user) cout<<x.first.second<<endl;
                else cout<<x.first.first<<endl;

                cout<<"-----------------\n";
                for(string msg : x.second){
                    cout<<msg<<endl;
                }
                found = true;
            }
        }
        if(!found) cout<<"No chats found.\n";
    }
};

map<pair<string,string>, vector<string>> ChatService::chatdatas;