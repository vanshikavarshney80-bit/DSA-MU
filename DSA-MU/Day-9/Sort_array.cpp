//Sort an array using two pointers.
#include <iostream>
using namespace std;
int main() {
    int nums[] = {1, 0, 1, 1, 0, 0, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]); 
    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (nums[left] == 0) {
            left++; 
        } else if (nums[right] == 1) {
            right--; 
        } else {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            
            left++;
            right--;
        }
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " "; // Prints: 0 0 0 0 1 1 1 1
    }
    cout << "\n";

    return 0;
}
