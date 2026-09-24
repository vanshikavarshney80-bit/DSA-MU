//euclidean algorithm
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    
    int temp1 = n; 
    int temp2 = m;
    
    while (m > 0) {
        temp2 = m;   
        m = n % m;  
        n = temp2;   
    }
    
    cout << "HCF is: " << temp2 << endl;
    return 0;
}
