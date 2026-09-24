//full diamond using function
#include<iostream>
using namespace std;
void rows(int &n){
    cout<<"enter n:";
    cin>>n;
}

int main(){
    int i,j,n;
    rows(n);
    for(i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
            
        }
        for(j=1;j<=2*i+1;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
} 
