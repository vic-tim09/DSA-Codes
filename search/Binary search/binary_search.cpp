// Search element by binary search . input must be sorted or order .

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{

    // start mid end
    int start = 0, mid, end = n - 1;
    while (start <= end)
    {
        // find mid
        mid = (start + end) / 2;

        // arr[mid]=mid
        if (arr[mid] == key)
        return mid;

        // arr[mid]<mid
        else if (arr[mid] < key)
        start = mid + 1;

        // arr[mid]>mid
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the size of arrray:";
    cin >> n;
    int arr[1000];
    cout << "Enter the element:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key:";
    cin >> key;
    cout << BinarySearch(arr, n, key);
    return 0;
}