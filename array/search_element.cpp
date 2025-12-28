// search element index of array 
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 90;
    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at index: " << pos;
    else
        cout << "Element not found!";
}
