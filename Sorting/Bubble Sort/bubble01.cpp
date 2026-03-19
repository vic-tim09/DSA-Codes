// bubble sort code
#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        bool swapped = 0; // for checke array is swapped or no.
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
int main()
{
    int arr[9] = {4, 7, 8, 5, 3};
    BubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}