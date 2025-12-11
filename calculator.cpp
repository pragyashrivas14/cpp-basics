#include<iostream>
using namespace std;
int main(){
    int a,b;
    int ch;
    cout<<"enter 1 number ";
    cin>>a;
    cout<<"enter 2 number ";
    cin>>b;
    cout<<"choice are";
    cout<<"press 1 for sum\n 2for diffrence \n 3for multiple\n 4 for divition \n";
    cout<<"enter your choice ";
    cin>>ch;
    if(ch==1){
        cout<<"sum is \n"<<a+b;
    }
    else if(ch==2){
        cout<<"diffrence is  "<<a-b;
    }
    else if(ch==3){
        cout<<"multiple is  "<<a*b;
    }
    else if(ch==4){
        cout<<"division is   "<<a/b;
    }
    else{
        cout<<"invalid choice";
    }
}