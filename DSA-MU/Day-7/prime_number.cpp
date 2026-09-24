#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;
    if (n < 2) {
        cout << "Not Prime" << endl;
        return 0; 
    }
    bool isPrime = true;
    for (int i = 2; i < n; i++) { // Check if any number from 2 up to n-1 divides n
        if (n % i == 0) {
            isPrime = false; // Found a factor, so it is not prime
            break;           
        }
    }
    if (isPrime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}
