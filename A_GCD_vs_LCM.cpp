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
        if(n % 2 == 0 && n >= 8){
            cout << 2 << ' ' << n-2*3 << ' ' << 2 << ' ' << 2 << '\n';
        }
        else{
            cout << 1 << ' ' << n-3 << ' ' << 1 << ' ' << 1 << '\n';
        }
    }
}