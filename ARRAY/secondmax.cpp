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
    int max=arr[0];
    int secondmax=arr[0];
    for(i=1;i<n;i++){
    if(arr[i]>max){
        secondmax=max;
        max=arr[i];
    }
    else if(arr[i]>secondmax && arr[i]!=max)
    secondmax=arr[i];
}  cout<<"second max is "<<secondmax;


}