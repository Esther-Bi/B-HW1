#include <iostream>
#include <string>
#include "mat.hpp"
#include "mat.cpp"
using namespace std;

int main(){
    string name;
    string phone;
    int a, b;
    char c1,c2;
    cout << "WELCOME TO OUR ORDERS PAGE!\nPLEASE ENTER YOUR NAME AND PHONE NUMBER." << endl;
    cin >> name >> phone;
    cout << "HELLO " << name << " LETS START YOUR CARPET ORDER!" << endl;
    cout << "PLEASE ENTER CARPET LENGTH.." << endl;
    cin >> a;
    cout << "PLEASE ENTER CARPET WIDTH.." << endl;
    cin >> b;
    cout << "PLEASE ENTER SYMBOLS.." << endl;
    cin >> c1 >> c2;
    cout << "YOUR CHOICE IS: " << a << "*" << b << " WITH " << c1 << "," << c2 << endl;
    cout << "YOUR NEW CARPET IS BEING MADE..\n\n";
    try{
        cout << ariel::mat(a,b,c1,c2) << endl;
        cout << "TO TRACK THE ORDER, YOU WILL RECEIVE MESSAGES TO " << phone << "\nTHANK YOU FOR THE PERFECT ORDER!\nENJOY (:" << endl;
        return 0;
    }catch(...){
        cout << "order details are inappropriate" << endl;
    }
}