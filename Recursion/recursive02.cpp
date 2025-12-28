// print n to 0 even and odd number with help of recursive function

#include <iostream>
using namespace std;
// for odd number
void odd(int n)
{
    if (n == 1) // base case
    {
        cout << 1 << endl;
        return;
    }
    cout << n << " ";
    odd(n - 2);
}
void even(int n)
{
    if (n == 2) // base case
    {
        cout << 2 << endl;
        return;
    }
    cout << n << " ";
    even(n - 2);
}
int main()
{
    even(100);
    odd(99);
}