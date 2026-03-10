#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "./Notification.h"


class NotificationUI{
    public:
    void start(string user){
        Notification n;
        n.showNotifications(user);
    }
};