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
    cout<<"/nelements are";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    int  min=arr[0]; //assume arraye 0 is min
    for(i=1;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    cout<<"/nmin element is "<<min;
}