#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<< "enter a";
    cin>>a;
    cout<< "enter b";
    cin>>b;

    char op;
    cout<< "enter operator";
    cin>>op;

    switch(op) {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        
        default:
            cout<<"enter valid operator";
    }
}