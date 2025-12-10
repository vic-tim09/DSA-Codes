#include <iostream>
using namespace std;
int main()
{

    // variable ke heap memory

    float *ptr = new float;
    *ptr = 3.13;    // value assign
    cout << *ptr << endl;

    int n;
    cout << "Enter the size of array:";
    cin >> n;

    // Dynamic / heap memmory allocation using new
    int *arr = new int[n];

    cout << "Enter the element of array:" << endl;
    // user input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // print the all elements:
    cout << "All the element of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}