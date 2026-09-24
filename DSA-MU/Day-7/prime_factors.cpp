#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;
    
    
    for (int i = 2; i * i <= n; i++) { // Check for prime factors up to square root of n
        while (n % i == 0) {
            cout << i << endl;
            n = n / i;
        }
    }
    if (n > 1) {             // If n is still greater than 1, then the remaining n is prime
        cout << n << endl;
    }
    
    return 0;
}
