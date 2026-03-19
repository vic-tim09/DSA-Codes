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
    sum = 1;
    cout << "The fibonacci series: 0 1 ";

    for (i = 3; i <= n; i++)
    {
        curr = last + pre;
        cout << curr << " ";
        sum = sum + curr;
        last = pre;
        pre = curr;
    }
    cout <<"\n"<< n << "th term of fibonacci series: " << curr << endl;
    cout << "Sum of all: " << sum;
    return 0;
}
