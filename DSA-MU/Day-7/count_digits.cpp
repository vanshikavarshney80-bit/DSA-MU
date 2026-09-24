#include<iostream>
using namespace std;
int mai(){
    int n,count=0;
    cout<<n;
    cin>>n;
    while(n>0){
        int dgt=n%10;
        count=count+1;
        n=n/10;
    }
    cout<<count;
}