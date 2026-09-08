#include<iostream>
using namespace std;
int main(){
    cout<<"Press 1 for Monday"<<endl;
    cout<<"Press 1 for Tuesday"<<endl;
    cout<<"Press 1 for Wednesday"<<endl;
    cout<<"Press 1 for Thursday"<<endl;
    cout<<"Press 1 for Friday"<<endl;
    cout<<"Press 1 for Saturday"<<endl;
    cout<<"Press 1 for Sunday"<<endl;
    int choice;
    cout<<"Enter choice";
    cin>>choice;
    switch(choice){
        case 1:cout<<"Monday";
        break;
        case 2:cout<<"Tuesday";
        break;
        case 3:cout<<"Wednesday";
        break;
        case 4:cout<<"Thursday";
        break;
        case 5:cout<<"Friday";
        break;
        case 6:cout<<"Saturday";
        break;
        case 7:cout<<"Sunday";
        break;
    }
    return 0;
}