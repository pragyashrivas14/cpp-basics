#include <iostream>
using namespace std;
int main(){
    int i,n,m,j;
        int arr[n],arr1[m],arr2[n+m];
    cout<<"enter the number you want";
    cin>>n;
    cout<<"enter the element you want";
    for(i=0;i<n;i++){
    cin>>arr[n];
    }
 cout<<"enter element you want in second array";
    cin>>m;
    cout<<"enter element of second array";
    for(j=0;j<m;j++){
        cin>>arr1[m];
    }
    int k=0;
    for(i=0;i<n;i++){
        arr2[k++]=arr[n];
    }
    for(j=0;j<m;j++){
        arr2[k++]=arr1[m];
    }
    cout<<"after marging array is ";
    for(k=o;k<n+m;k++){
        cout<<arr2[n+m]<<" ";
    }
return 0;

}