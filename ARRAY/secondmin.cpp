#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter how element you want";
    cin>>n;
    int arr[n];
    cout<<"array element :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    int secondmin=arr[0];
    for(i=1;i<n;i++){
    if(arr[i]<min){
        secondmin=min;
        min=arr[i];
    }
    else if(arr[i]<secondmin && arr[i]!=min)
    secondmin=arr[i];
}  cout<<"second min is "<<secondmin;


}