#include<iostream>
using namespace std;
int mai(){
    int n,rev=0;
    cout<<n;
    cin>>n;
    while(n>0){
        int dgt=n%10;
        rev=rev*10+n;
        n=n/10;
    }
    cout<<rev;
}