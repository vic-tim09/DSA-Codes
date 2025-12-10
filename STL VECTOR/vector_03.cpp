// creat vecrtor with element 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // creat a vector / declare which present with element 
    vector<int> v{1,3,5,78,9};

    // v[1] = 2;

    v.push_back(0);
    // v.push_back(9);
    // v.push_back(8);

    // print all element 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "size of vector : " << v.size();
    cout <<endl<< "capacity of vector : " << v.capacity();

}
