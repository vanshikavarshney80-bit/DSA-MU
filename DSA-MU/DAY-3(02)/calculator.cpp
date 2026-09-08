#include<iostream>
using namespace std;
int main(){
    cout<<"Press 1 for addition"<<endl;
    cout<<"Press 2 for subtraction"<<endl;
    cout<<"Press 3 for multiplication"<<endl;
    cout<<"Press 4 for quotient"<<endl; //division = quotient
    cout<<"Press 5 for remainder"<<endl; //modulo dividion = remiander
    int a,b,ch;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter choice:"<<endl;
    cin>>ch;
    
    switch(ch){
        case 1:cout<<"Sum is:"<<a+b<<endl;
        break;
        case 2:cout<<"Differenec is:"<<a-b<<endl;
        break;
        case 3:cout<<"Multiplication is:"<<a*b<<endl;
        break;
        case 4:cout<<"Quotient is:"<<a/b<<endl;
        break;
        case 5:cout<<"Remainder is:"<<a%b<<endl;
        break;
        default:
            cout<<"Enter a valid choice"<<endl;
    }
    return 0;
}