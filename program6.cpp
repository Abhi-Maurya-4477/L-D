// Create 2D array (algo and program) 

// Input the number of rows and columns of the 2D array.
// Declare a 2D array based on the input sizes.
// Input the elements for each row and column.
// Display the elements of the 2D array row by row

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    
    int arr[100][100]; // Assume maximum size of 100x100

    cout << "Enter elements of the 2D array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
