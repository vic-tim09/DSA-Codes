#include <iostream>
using namespace std;
int main()
{
     // eska \ mtlab hua ki mujhe chhod ke agale wale ko print kro  
    string s = "Tapasya is a \"good\" girl.";
    cout << s<<endl;

    string t = "\\0";          // NULL char ko bhi aise print krte hai 
    cout << t;

    return 0;
}