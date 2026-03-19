// reverse the given array 
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int start=0, end=4;
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 5;i++)
    {
        cout << arr[i] << " ";
    }
}