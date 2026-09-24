#include<iostream>
using namespace std;
int mai(){
    int n;
    cout<<n;
    cin>>n;
    while(n>0){
        int dgt=n%10;
        cout<<dgt;
        n=n/10;
    }
}
