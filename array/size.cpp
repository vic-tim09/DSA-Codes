// to cheack size of array.

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 4, 5, 67, 7};

    cout << "size of array:";
    cout << sizeof(arr) << endl;

    cout << "Number of element:";
    cout << sizeof(arr) / sizeof(arr[0]) << endl;

    cout << "data type size:" << endl;
    int a;
    float b;
    char c;
    bool d;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    return 0;
}