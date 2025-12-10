// print the all address and value with help of pointer:

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,4,3,2,5};

    int *ptr = arr;
    // ptr = ptr + 2;
    // cout << *ptr<< endl;
    cout << "all assress:" << endl;

    for (int i = 0; i < 5;i++){
        cout << &ptr[i]<<endl;
    }
    cout << "all value:" << endl;
    for (int i = 0; i < 5;i++){
        cout << *(ptr + i )<<" ";
    }
    cout <<endl<< "new"<<endl;
    for (int i = 0; i < 5;i++){
        cout << ptr<<endl;
        ptr++;
    }
    return 0;
}