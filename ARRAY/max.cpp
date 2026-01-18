#include<iostream>
using namespace std;
int main(){
    int n ,i;
    cout<<"number of elemnents";
    cin>>n;
    int arr[n];
    cout<<"enter elements" ;
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    cout<<"elements are" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    int  max=arr[0]; //assume arraye 0 is max
    for(i=1;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"max element is "  <<max<<"\n";
}