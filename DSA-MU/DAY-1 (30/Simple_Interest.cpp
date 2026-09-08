#include<iostream>
using namespace std;
int main(){
    int P,T;
    double R,SI;
    cout<<"Principal:";
    cin>>P;
    cout<<"Enter Time:";
    cin>>T;
    cout<<"Enter Rate:";
    cin>>R;
    SI=(P*R*T)/0.01;
    cout<<"Simple Interest:"<<SI;
    return 0;

}