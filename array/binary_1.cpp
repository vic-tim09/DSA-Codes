// Search first  element and last element by binary search .

#include <iostream>
using namespace std;

void BinarySearch(int arr[], int n, int key)
{

    // start mid end
    int start = 0, mid, end = n - 1, first = -1, last = -1;

    while (start <= end)
    {
        // find first key:
        mid = start + (end - start) / 2;

        // arr[mid]=mid
        if (arr[mid] == key)
        {

            first = mid;
            end = mid - 1;
        }

        // arr[mid]<mid
        else if (arr[mid] < key)
            start = mid + 1;

        // arr[mid]>mid
        else
            end = mid - 1;
    }

    // find last key:
    start = 0, end = n - 1;
    while (start <= end)
    {
        // find first key:
        mid = start + (end - start) / 2;

        // arr[mid]=mid
        if (arr[mid] == key)
        {

            last = mid;
            start = mid + 1;
        }

        // arr[mid]<mid
        else if (arr[mid] < key)
            start = mid + 1;

        // arr[mid]>mid
        else
            end = mid - 1;
    }
    if (first != -1)
        cout << "first occurance: " << first << endl
             << "last occurance: " << last;

    else
        cout << "element is not found.";
}

int main()
{
    int n, key;
    cout << "Enter the size of arrray:";
    cin >> n;
    int arr[1000];
    cout << "Enter the element:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key:";
    cin >> key;
    BinarySearch(arr, n, key);
    return 0;
}