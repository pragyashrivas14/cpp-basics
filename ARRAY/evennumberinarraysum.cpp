#include<iostream>
using namespace std;
int main(){
    int n,i;
    int sum=0;
    cout<<"enter how much element you want";
    cin>>n;
     int arr[n];
     cout<<"enter element ";
     for(i=0;i<n;i++){
        cin>>arr[i];
     }
          for(i=0;i<n;i++){
     if(arr[i]%2==0){
        sum=sum+arr[i];
     }
    }
    cout<<"sum is "<<sum;
}