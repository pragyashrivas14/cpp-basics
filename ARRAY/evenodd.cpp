#include<iostream>
using namespace std;
int main(){
    int n,i;
    int count=0;
    cout<<"enter element you want";
    cin>>n;
    int arr[n];
    cout<<"ARRAY ELEMENT:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
        for(i=0;i<n;i++){
    if(arr[i]%2==0){
        count++;
    }
}
cout<<" count of even number is "<<count;
}