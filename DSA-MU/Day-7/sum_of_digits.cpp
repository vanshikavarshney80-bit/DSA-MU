#include<iostream>
using namespace std;
int mai(){
    int n,sum=0;
    cout<<n;
    cin>>n;
    while(n>0){
        int dgt=n%10;
        sum=sum+dgt;
        n=n/10;
    }
    cout<<sum;
}