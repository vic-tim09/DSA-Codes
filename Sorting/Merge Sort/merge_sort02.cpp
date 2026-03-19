// merge sorting with temp array
#include <iostream>
using namespace std;
void merge(int arr[], int start, int mid, int end)
{
    int n = end - start + 1;
    int temp[n];
    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            left++, index++;
        }
        else
        {
            temp[index] = arr[right];
            right++, index++;
        }
    }
    // left array is not empty yet
    while (left <= mid)
    {
        temp[index] = arr[left];
        left++, index++;
    }
    // right array is not empty yet
    while (right <= end)
    {
        temp[index] = arr[right];
        right++, index++;
    }
    // put temp value in original array
    index = 0;
    while (start <=end)
    {
        arr[start] = temp[index];
        start++, index++;
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start == end)
        return;

    int mid = start + (end - start) / 2;
    // left side
    mergeSort(arr, start, mid);
    // right side
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int n = 8;
    int arr[n] = {3, 5, 9, 7, 5, 8, 0, 58};
    mergeSort(arr, 0, n-1);

    cout << "sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}