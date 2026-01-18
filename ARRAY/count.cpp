#include<iostream>
using namespace std;
int main(){
    int i,n;
    int count=0;
    cout<<"enter how many element you want";
    cin>>n;
    int arr[n];
    cout<<"ELEMENT ARE:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
        for(i=0;i<n;i++){
    if(arr[i]==0){
        count++;
    }
}
    cout<<"number of zero in array"<<count; 
    return 0;
}