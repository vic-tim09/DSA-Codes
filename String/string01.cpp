// string print by array in form of character 

#include <iostream>
using namespace std;
int main()
{
    char arr[] = {'a', 'n', 'k', 'i', 't'};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout <<"\nEnter the character:" << endl;
    // char baby[20];     //maximum size
    char baby[10];
    cin >> baby;

    baby[3] = '\0';       // NULL character it means yaha stop ho jayega array
    cout << baby;

    return 0;
}
