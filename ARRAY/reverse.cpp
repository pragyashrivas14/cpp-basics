#include<iostream>
using namespace std;
int main(){
    int n,i;
    int temp;
    cout<<"enter element of array";
    cin>>n;
    int arr[n];
    cout<<"ELEMENTS ARE: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<end){
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
    
cout<<"after reverse array is ";
for(i=0;i<n;i++){
cout<<arr[i];
}
return 0;
}