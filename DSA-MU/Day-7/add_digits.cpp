//brute force---->O(n)
#include<iostream>
using namespace std;
int main(){
        int num,sum=0;
        cin>>num;
        while(num>=10){
            int digit=num%10;
            sum=sum+digit;
            num=num/10;
            num=sum+num;

        } 
        return num;

}

// best approach-->O(n^2)
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter num: ";
    cin >> num;
    while (num >= 10) { //loop continues until a single digit.
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }
        num = sum; 
    }
    cout << num << endl;
    return 0;
}


//optimal approach--->O(1)
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "enter num: ";
    cin >> num;
    int result = (num == 0) ? 0 : 1 + (num - 1) % 9;
    cout << result << endl;
    return 0;
}


