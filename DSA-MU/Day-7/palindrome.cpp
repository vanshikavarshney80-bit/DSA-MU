#include<iostream>
#include <iostream> 
using namespace std; 

int main() { 
    int n, digit, temp, rev = 0; 
    
    cout << "Enter n: "; 
    cin >> n; 
    temp = n; 
    
    while (n > 0) { 
        digit = n % 10;   
        rev = rev * 10 + digit; 
        n = n / 10;      
    }
    if (temp == rev) {
        cout << "Palindrome" << endl; 
    } else {
        cout << "Not palindrome" << endl; 
    }
}