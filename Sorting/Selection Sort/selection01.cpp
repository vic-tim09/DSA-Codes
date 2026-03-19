// selection sort code :
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[index] > arr[j])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
}
int main()
{
    int arr[9] = {2, 4, 22, 90, 25, 7, 1, 0, 4};
    selectionSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}