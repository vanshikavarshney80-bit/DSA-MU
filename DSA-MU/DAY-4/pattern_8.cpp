//inverted full pyramid
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int sp=1;sp<=i-1;sp++){
            cout<<" ";
            
        }
        for(j=1;j<=2*(n-i)+1;j++){
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} 