//Approach-1
#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    if(n<=0) return false;
      while(n%2==0){
        n=n/2;
      }
      return n==1;
}

//Approach-2
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=30;i++){
        int target=pow(2,i);
        if(target==n)return true;
        return false;
    }
}