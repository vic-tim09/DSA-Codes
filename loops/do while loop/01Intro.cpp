// Execute one time even condition is false 
#include <iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter the NUmber :";
    cin >> i;
    do {
        cout << "Hello Bro ! \n";
        i++;
    } while (i <= 5);
}