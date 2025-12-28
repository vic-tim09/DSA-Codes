// recursive function print 

#include <iostream>
using namespace std;
void recursion(int n)
{
    if (n == 0)   //base case 
    {
        cout << "Today is 1 september\n";
        cout << "HAPPY BIRTHDAY TAPSU!\n";
        return;
    }
    cout << n << " days left for Birthday !\n";
    recursion(n - 1);
}
int main()
{
    recursion(248);
}