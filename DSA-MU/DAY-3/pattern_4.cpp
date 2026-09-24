#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter n:";
    cin>>n;
    for(i=0;i<n;i++){
        for(int sp=0;sp<n-i;sp++){
            cout<<" ";
            
        }
        for(j=0;j<=i;j++){
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} 