// Quick sort algorithms
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end) // base case for stop recurtion
        return;
    int pivot = partition(arr, start, end);
    // left side
    quicksort(arr, start, pivot - 1);
    // right side
    quicksort(arr, pivot, end);
}
int main()
{
    int arr[] = {2, 3, 7, 1, 3, 8, 33, 0, 21, 99};
    quicksort(arr, 0, 9);
    cout << "Sorted array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}