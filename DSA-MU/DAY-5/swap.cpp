#include<iostream>
using namespace std;
int swap(int &x){
  return x=8;
}
int main(){
    int b=20;
    swap(b);
    cout<<b;
    return 0;
}