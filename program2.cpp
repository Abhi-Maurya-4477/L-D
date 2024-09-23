// Program  and algo to Delete an Element from an Array

// 1.Input the array elements and the size of the array.
// 2.Input the position from which the element is to be deleted.
// 3.Shift the elements to the left starting from the given position to overwrite the element at the specified position.
// 4.Decrease the array size by 1.
// 5.Display the array after deletion.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, position;
    
    
    cout << "Enter number of elements in array: ";
    cin >> n;

    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "Enter the position of the element to delete (1-based index): ";
    cin >> position;

    
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
