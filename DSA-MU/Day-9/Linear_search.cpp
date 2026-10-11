//Linear Search

#include<iostream>
using namespace std;
int main(){
    int target;
    bool flag=0; // flag is a state checker . 
    cout<<"Enter target:";
    cin>>target;
    int arr[]={3,4,6,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            break;
        }
          
    }
    if(flag==true)cout<<target<<"is present";
    else cout<<target<<"is not present";
}