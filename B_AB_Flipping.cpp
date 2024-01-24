#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    string s;
    cin >>s;
    
    int count = 0,youare = 0;
    int f = 0;

    for(int j = n-1; j >= 0; j--){
        f = 0;
        if(s[j] == 'B'){
            count++;
        }
        else {
            youare += count;
            if(count > 0)
                count = 1;
        }
        

    }

    cout << youare << endl;
    }
}