#include<iostream>
using namespace std;
int main(){
    int i,n;
    int search;
    int found =0;
    cout<<"enter how many number you want";
    cin>>n;
    int arr[n];
    cout<<"ARRAY ELEMENT:";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"enter number you want to search";
    cin>>search;
    for(i=0;i<n;i++){
        if(arr[i]==search){
            found ++;
        }
    } 
    cout<<"element found "<<found;
    if(found==1){
        cout<<"found complete"<<"\n"<<search;
    }
    else{
        cout<<"/n"<<"found not complete";
    }
    return 0;
}