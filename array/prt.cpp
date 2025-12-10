// Initilization in array:

#include <iostream>
using namespace std;
int main()
{

    // first method.

    /* int arr[5] = {1, 4, 5, 67, 7};
    int i;
    for (i = 0; i < 5;i++){
        cout <<arr[i]<<" ";
    }*/

    // second method.
    /*int arr[] = {1, 4, 5, 67, 7};
    int i;
    for (i = 0; i < 5;i++){
        cout <<arr[i]<<" ";
    }*/

    // third method.
    /*/ int arr[8] = {1, 4, 5, 67, 7};
     int i;
     for (i = 0; i < 8;i++){
         cout <<arr[i]<<" ";
     }*/

    // Fourth method.
    /* int arr[10] = {0};
    int i;
    for (i = 0; i < 10;i++){
        cout <<arr[i]<<" ";
    }*/

    // fifth method
    /*int arr[6];
    int i;
    for (i = 0; i < 6; i++){
        cin >>arr[i];
    }

    for (i = 0; i < 6; i++)
        cout << arr[i]<<" ";*/

    // size given by user.
    int size;
    cout << "enter the size:";
    cin >> size;
    int arr[1000]; // 1000 is limit of size.

    int i;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
