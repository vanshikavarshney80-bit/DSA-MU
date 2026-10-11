//Calculate the sum of all elements in the given array
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of all given elements in an array:"<<sum;

    
    return 0;
}