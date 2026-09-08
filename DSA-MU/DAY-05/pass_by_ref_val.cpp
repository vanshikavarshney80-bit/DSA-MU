#include<iostream>
using namespace std;
int change1(int x){

        return x=100;
}
int change2(int &x){
    return x=100;
}

int main(){
    int a=10;
    int b=20;
    change1(a);
    change2(b);
    cout<<a<<endl;
    cout<<b;
    return 0;
}