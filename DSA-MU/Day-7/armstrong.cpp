#include<iostream>
using namespace std;
int main(){
    int n,digit,sum=0;
    cout<<"enter n:";
    cin>>n;
    while(n>0){
          digit=n%10;
          sum=sum+digit*digit*digit;
          n=n/10;
    }
    cout<<sum;
}