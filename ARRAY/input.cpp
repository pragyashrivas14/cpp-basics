#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of element";
    cin>>n;
        int arr[n];
        cout<<"enter element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements are";
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}