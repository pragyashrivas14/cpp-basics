#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the element you want";
    cin>>n;
    int arr[n];
    cout<<"element of array";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"nagative  ELEMENTS :";
    for(i=0;i<n;i++){
    if(arr[i]<0){
        cout<<arr[i]<<"\n";
    }
}
    cout<<"positive NUMBER ";
        for(i=0;i<n;i++){
    if(arr[i]>0){
        cout<<arr[i]<<"\n";
}
    }return 0;
}