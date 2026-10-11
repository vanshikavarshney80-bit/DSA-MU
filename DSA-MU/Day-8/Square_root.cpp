//Approach -1
#include<iostream>
using namespace std;
int main(){
        int x;
        cin>>x;
        long long int i=1;
        while( i*i<=x){
            i++;
        }
        return i-1;
}


//Approach-2
#include<iostream>
using namespace std;
int main(){
        long long int i=1;
        int x;
        cin>>x;
        if(x<2){
            return x;
        }
        for( i;i<=x;i++){
            if(i*i>x){
                return i-1;
            }
        }
        return 0;
}
