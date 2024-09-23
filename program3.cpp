//Program  and algo to Find the Maximum and Minimum Element in an Array.

// Input the array elements and the size of the array.
// Initialize two variables: one for storing the maximum element and one for the minimum element. Assign both of them the value of the first element of the array.
// Traverse the array from the second element to the last:
// If the current element is greater than the maximum, update the maximum.
// If the current element is smaller than the minimum, update the minimum.
// Display the maximum and minimum values.

#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    
    cout << "Enter number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min
        }
    }

    // Step 5: Output the maximum and minimum values
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
