#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter all elements (space separated): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key: ";
    int key;
    cin >> key;

    cout << "You entered key = " << key << endl;
    return 0;
}
