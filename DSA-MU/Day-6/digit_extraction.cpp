#include<iostream>
using namespace std;
int main(){
    int n,digit,count=0;;
    cout<<"Enter n";
    cin>>n;
    while(n>0){
        digit=n%10; //digit extraction
        count++;
        n=n/10;//updation
        
    }
    cout<<count;
}