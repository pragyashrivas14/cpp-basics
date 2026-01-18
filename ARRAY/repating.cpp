#include<iostream>
using namespace std;
int main(){
    int i,n,num;
    int repeate=0;
    cout<<"enter you want";
    cin>>n;
    int arr[n];
    cout<<"array element is ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"numbe which you want chack";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]==num){
            repeate++;
        }
    }
    cout<<" the number repeate "<<num<<"time"<<repeate;

}