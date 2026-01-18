#include<iostream>
using namespace std ;
int main(){
    int sum=0;
    int n;
    cout<<"enter  number of elements :";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    cout<<"elements are";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
            cout<<"\nsum "<< sum;

}