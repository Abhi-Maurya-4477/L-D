// Program and algo  to Reverse an Array

// Input the array elements and the size of the array.
// Initialize two pointers: one pointing to the start of the array and one pointing to the end of the array.
// Swap the elements at the start and end positions.
// Move the start pointer forward and the end pointer backward.
// Repeat the swapping process until the start pointer is greater than or equal to the end pointer.
// Display the reversed array

#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;

    
    while (start < end) {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        
        start++;
        end--;
    }

    
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
