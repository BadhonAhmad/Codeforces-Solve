#include <iostream>
using namespace std;
 
// Function to compute num (mod a)
int mod(string num, int a)
{
    // Initialize result
    int res = 0;
    // One by one process all digits of 'num'
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;
    return res;
}
// Driver program
int main()
{
    
    string num ;
    int ss;
    while (1)
    {
        cin >> num;
        if(num[0] == '0'){
            break;
        }
        else{
              ss = mod(num, 17);
        }
       // cout << ss << endl;
        if(ss == 0){
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }

    return 0;
}