 /*    *
    *   *
  *   *    *
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter n:";
    cin>>n;
    for(i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
            
        }
        for(j=0;j<2*i+1;j++){ //for odd we use 2*i+1 
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} 