//Program  and algo to Find the Second Largest Element in an Array

// 1.Algorithm to Find the Second Largest Element:
// 2.Input the array elements and the size of the array.
// 3.Initialize two variables, first and second:
// 4.Set first as the largest element encountered so far.
// 5.Set second as the second largest element encountered so far.
// 6.Traverse the array:
// 7.For each element:
// 8.If the current element is greater than first, update second to first, and update first to the current element.
// 9.Else if the current element is less than first but greater than second, update second to the current element.
// 10.After traversing the array, second will hold the second largest element.
// 11.Display the second largest element

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

    int INT_MIN;
    int first = INT_MIN, second = INT_MIN;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first; // Update second largest
            first = arr[i]; // Update largest
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i]; // Update second largest
        }
    }

    
    if (second == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}

