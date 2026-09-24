#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;//count=0
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<n;i++){
      for(j=0;j<i+1;j++){
        cout<<count;//count=count+1
      }
      count++;
      cout<<endl;
    }
    
    return 0;
}