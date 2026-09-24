#include<iostream>
using namespace std;
void getcheck(int &n){
    cout<<n;
    cin>>n;
}
int main(){
    int n;
     getcheck(n);
     for(int i=0;i<n;i++){
        if(n%2==0){
            cout<<"even number:"<<n;
        }
        cout<<"odd number"<<n;
     }
}