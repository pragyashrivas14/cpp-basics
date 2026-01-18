#include<iostream>
using namespace std;
int main(){
    int i,n;
    double average ;
    int sum=0;
    cout<<"enter how much element you want";
    cin>>n;
    int arr[n];
    cout<<"ARRAY ELEMENT :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    average=(double) sum/n;
        cout<<"sum is"<<sum<<endl;
        cout<<"avrage is "<<average<<endl;

}