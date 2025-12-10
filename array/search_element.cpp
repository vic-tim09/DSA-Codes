
// #include <iostream>
// using namespace std;
// int main()
// {
//     int index, i;
//     int arr[5] = {1, 5, 67, 7,67};

//     for ( i = 0; i < 5;i++){
//         if (arr[i] == 67){
//             index = i;
//         break;
//         }
//     }
//     cout << index;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;
    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at index: " << pos;
    else
        cout << "Element not found!";
}
