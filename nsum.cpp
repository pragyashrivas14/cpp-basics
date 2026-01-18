#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter number from where you want to print ";
    cin>>n;
    //for(int i=0;i<n;i++){
      //  cout<<i<<"\n";
    
    for(int i=0;i<=n;i++){
    sum=sum+i;}
    cout<<"sum is "<<sum;

}