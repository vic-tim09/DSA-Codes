#include <iostream>
using namespace std;
void Insertion_sort(int arr[], int n)
{
    int min, j;
    for (int i = 1; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > min)
        {
            arr[j+1] = arr[j];
            arr[j] = min;
            j--;
        }
    }
}

int main()
{
    int arr[10] = {2, 4, 2, 6, 99, 23, 12, 9, 4, 44};
    Insertion_sort(arr, 10);
    for (int i = 0; i < 10;i++)
    {
        cout << arr[i]<<" ";
    }
}