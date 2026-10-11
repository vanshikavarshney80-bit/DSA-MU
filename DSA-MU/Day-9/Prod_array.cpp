//Calculate the product of all elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int prod=1;
    int arr[]={1,2,3,4,5};
   for(int i=0;i<5;i++){
        prod=prod*arr[i];
        
    }
    cout<<"Product is:"<<prod;
   

}