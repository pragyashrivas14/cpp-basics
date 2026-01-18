#include<iostream>
using namespace std;
int main(){
    int i,n;
    int realsum,currentsum,missingnumber;
    int sum=0;
    cout<<"enter how many elelment you want";
    cin>>n;
    int arr[n-1];
    cout<<"array elelment";
    for(i=0;i<n-1;i++){
    cin>>arr[i];
    }
    realsum=n*(n+1)/2;
        for(i=0;i<n-1;i++){
         sum=sum+arr[i];
        }
        currentsum=sum;
        missingnumber=realsum-currentsum;
cout<<"missing number is "<<missingnumber;
}