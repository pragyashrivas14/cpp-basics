#include<iostream>
using namespace std;
int main(){
    int i,n,num;
    int duplicte=0;
    cout<<"enter how many number yo want";
    cin>>n;
    int arr[n];
    cout<<"ARRAY ELEMENT ARE :";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"enter number whose duplicate you want";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]==num){
            duplicte++;
        }
    }
    if(duplicte>0){
                cout<<"duplicate find in array duplicate is ";}
                else if(duplicte==1){
                    cout<<"number find but duplicate not found ";
                }
        else{
            cout<<"duplicate not found";
        }
    


}