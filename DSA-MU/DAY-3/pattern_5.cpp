#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int sp=0;sp<i;sp++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}