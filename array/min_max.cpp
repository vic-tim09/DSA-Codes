// To find minimum value in array.

#include <iostream>
#include <climits>

using namespace std;
int main()
{
    
    int arr[5] = {1, 4, 5, 67, 7};
    int ans = INT_MAX;          //// initially set to maximum integer
    
    for (int i = 0; i < 5; i++)                   // INT_MAX = 2147483647 (sabse bada integer value)
    {
        if (arr[i] < ans)
        ans = arr[i];
    }
    cout << "Minimum value in array is: " << ans << endl;

    // To find maximum value in array.
     ans = INT_MIN;                            //INT_MIN = −2147483648 (sabse chhota integer)
    for (int i = 0; i < 5; i++)                   
    {
        if (arr[i] > ans)
        ans = arr[i];
    }
    cout << "Maximum value in array is: " << ans << endl;

    return 0;
}


