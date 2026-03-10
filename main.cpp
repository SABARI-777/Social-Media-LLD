#include <iostream>
#include "UI.h"
using namespace std;

void printLine() {
    cout << "============================================================" << endl;
}

int main() {
    printLine();
    cout << "              WELCOME TO SOCIAL MEDIA SYSTEM" << endl;
    printLine();

    UI ui;
    ui.start();

    printLine();
    cout << "              THANK YOU FOR USING THE SYSTEM" << endl;
    printLine();
    return 0;
}