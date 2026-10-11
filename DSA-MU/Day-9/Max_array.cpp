//maximum element in a given array.
#include<iostream>
using namespace std;
int main(){
   
    int arr[]={1,2,3,4,5,7,6,5,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<=n;i++){
        if(max<arr[i]){
            cout<<max;
            break;
        }
    }
}