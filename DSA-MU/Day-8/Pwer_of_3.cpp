//Approach-1
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=30;i++){
      long long int target=pow(3,i);
        if(target==n){
                return true;
        }
        if(target>n){
            break;
        }
        return false;
    }
}

//Approach-2
#include <iostream>
using namespace std;
bool isPowerOfThree(int n) {
    if (n == 1) return true;
    if (n <= 0 || n % 3 != 0) return false;
    return isPowerOfThree(n / 3);
}

int main() {
    int test_number = 27;
    cout<< isPowerOfThree(test_number) << "\n";
    return 0;
}

