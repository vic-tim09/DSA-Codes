// to find possible positon if key exists
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    int index = n; // assume agar key array ke last ke baad aayegi to position n hai

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            // agar key mil gayi to wahi index hai
            index = mid;
            return index;
        }
        else if (arr[mid] < key)
        {
            // key agar mid se badi hai to right side me hoga
            start = mid + 1;
        }
        else
        {
            // key agar mid se chhoti hai to left side me hoga
            index = mid; // possible insert position
            end = mid - 1;
        }
    }

    // agar loop ke baad bhi nahi mila to possible position "start" hai
    return index == n ? start : index;
}

int main()
{
    int n, key;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[1000];
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the key: ";
    cin >> key;

    int pos = BinarySearch(arr, n, key);

    if (pos < n && arr[pos] == key)
        cout << "Element found at index: " << pos << endl;
    else
        cout << "Element not found! Possible position: " << pos << endl;

    return 0;
}
