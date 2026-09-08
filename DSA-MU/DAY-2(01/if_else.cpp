#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade O";
    }
    else if(marks>=80 && marks<90){
        cout<<"Grade A+";
    }
    else if(marks>=70 && marks<80){
        cout<<"Grade A";
    }
    else if(marks>=60 && marks<70){
        cout<<"Grade B+";
    }
    else if(marks>=50 && marks<60){
        cout<<"Grade B";
    }
    else if(marks>=40 && marks<50){
        cout<<"Grade C+";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}