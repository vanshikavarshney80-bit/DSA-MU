#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int x;
    cout << "Enter integer: ";
    cin >> x;

    int rev = 0;
    int min_range = INT_MIN; 
    int max_range = INT_MAX;
   
    while (x != 0) {
        int digit = x % 10;
        if (rev < min_range / 10 || rev > max_range / 10) {
            cout << 0 << endl;
            return 0;
        }
        rev = rev * 10 + digit;
        x = x / 10;
    }

    cout << rev << endl;
    return 0;
}
