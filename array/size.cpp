// to cheack size of array.

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 4, 5, 67, 7};

    cout << "size of array:";
    cout << sizeof(arr) << endl;

    cout << "Number of element: ";
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "data type size:" << endl;
    int a;
    float b;
    char c;
    bool d;
    cout << "for int "<<sizeof(a) << endl;
    cout << "for float "<<sizeof(b) << endl;
    cout << "for char "<<sizeof(c) << endl;
    cout << "for bool "<<sizeof(d) << endl;
    return 0;
}