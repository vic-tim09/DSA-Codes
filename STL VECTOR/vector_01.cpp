// vector creation with STL

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // creat a vector / declare
    vector<int> v;

    // insert element into the  vector
    v.push_back(7);
    v.push_back(3);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);

    //  delete element from the vector
    v.pop_back();

    // size and capacity
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;

    // remove a element of particullar index
    v.erase(v.begin() + 1); // delete 3 from vector

    // insert an element of particullar index
    v.insert(v.begin() + 1, 10); // insert 10 at 1 index into vector
    cout << "insert 10 into vector at index 1 :\n";

    // print a particullar element
    cout << "element at index 2 : " << v[2] << endl;

    // size and capacity
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;

    // print all element
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // to find front and end element
    cout << "\nfront element of vector : " << v.front() << endl;
    cout << "last element of vector : " << v.back() << endl;

    // remove all element
    v.clear();
    cout << endl;

    // size and capacity
    cout << "size of vector : " << v.size() << endl;
    cout << "capacity of vector : " << v.capacity() << endl;


}