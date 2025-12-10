// 2D ARRAY DYNAMIC ALLOCATION
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    // Step 1: Create array of pointers (stores addresses)
    int** ptr = new int*[rows];

    // Step 2: Create individual 1D arrays for each row
    for(int i = 0; i < rows; i++) {
        ptr[i] = new int[cols];
    }

    // Input values
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> ptr[i][j];
        }
    }

    // Display matrix
    cout << "Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory - First delete individual arrays
    for(int i = 0; i < rows; i++) {
        delete[] ptr[i];
    }
    // Then delete the array of pointers
    delete[] ptr;

    return 0;
}