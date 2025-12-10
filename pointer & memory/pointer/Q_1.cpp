#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,4,3,2,5};
    
    // print the address of first element  or 0 index:
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr [0] << endl;

    int *ptr = arr ;
    cout << arr << endl;
    
    // print the address of second element  or 1 index:
    
    cout << "second address:"<< endl;
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;
    
    // print the value of second element  or 1 index:
    cout << arr[0] << endl;
    cout << *(arr + 0) << endl;
    cout << *arr << endl;
    cout << *ptr << endl;

    // print all address:

    cout << "all address:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << endl;
    }

    // print all value
    cout << "all valueL:";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
        return 0;
}
