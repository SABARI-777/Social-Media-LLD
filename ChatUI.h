#pragma once
#include<bits/stdc++.h>
using namespace std;
#include "Chat.h"
#include "Notification.h"

class ChatUI{
private:
    ChatService ch;

public:
    void start(string user){
        while(true){
            cout<<"1. Send Message"<<endl;
            cout<<"2. View My Chats"<<endl;
            cout<<"3. Exit"<<endl;

            int op;
            cin>>op;
            cin.ignore();

            if(op==3) break;

            if(op==1){
                string friendId,msg;
                cout<<"Enter Friend NAME: ";
                cin>>friendId;
                Notification n;
                n.addChatNotification(friendId,"CHAT_NOTIFICATION!!!!!");
                cin.ignore();
                cout<<"Enter Message: ";
                getline(cin,msg);

                ch.sendMessage(user, friendId, msg);
            }
            else if(op==2){
                ch.showUserChats(user);
            }
            else{
                cout<<"Invalid option"<<endl;
            }
        }
    }
};