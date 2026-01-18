#include<iostream>
using namespace std;
int main(){
int n,i;
int sum=0;
cout<<"enter number of  element in array";
cin>>n;
int arr[n];
cout<<"element are"<<"\n";
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
sum=sum+arr[i];
}
cout<<"sum is "<<sum;
}
