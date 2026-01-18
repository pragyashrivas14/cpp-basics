#include<iostream>
using namespace std;
int main(){
    int i,n,num;
     int freq=0;
    cout<<"enter how mnay time you want elelment ";
    cin>>n;
    int arr[n];
    cout<<"enter element";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter number you want freq";
    cin>>num; 
    for(i=0;i<n;i++){
    if(arr[i]==num){
        freq++;
    }
}
    cout<<"freq of "<<num<<"is"<<freq;
}