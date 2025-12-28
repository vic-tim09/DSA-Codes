#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(5);
    cout << "Enter the input: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    // file open kro
    ofstream fout;
    fout.open("hero.txt", ios::out);
    fout << "Original data: ";
    
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }
    fout << "\nSorted data: ";
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }

    fout.close(); // resourses release kr du taki workers apne ghar jaye
}