// To print fibonacci series.also sum.

#include <iostream>
using namespace std;
int main()
{
    int n, i, pre, last, curr, sum;
    cout << "Enter the number terms: ";
    cin >> n;
    last = 0;
    pre = 1;
    curr = 0;
    sum = 7;
    cout << "The fibonacci series: 0 1 ";

    for (i = 3; i <= n; i++)
    {
        curr = pre + last;
        cout << curr << " ";
        last = pre;
        pre = curr;
        sum = sum + curr;
    }
    cout << endl
         << n << "th term of fibonacci series: " << curr << endl;
    cout << "Sum of all: " << sum;
    return 0;
}
