// Program and algo to Insert an Element in an Array in c++

// 1. Input the array elements and the size of the array.
// 2. Input the position where the new element is to be inserted.
// 3. Input the element to be inserted.
// 4. Shift the elements of the array starting from the given position towards the right to create space for the new element.
// 5. Insert the new element at the specified position.
// 6. Increase the array size by 1.
// 7. Display the array after insertion.

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, element, position;
    
    
    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position where the element should be inserted (1-based index): ";
    cin >> position;

    // Step 4: Adjust for 0-based indexing in C++
    position--;

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
