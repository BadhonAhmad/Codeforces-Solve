// C++ program to demonstrate __builtin_popcount()
#include <iostream>
using namespace std;
#define int long long
int32_t main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b,c=-99,dt;
        cin >> a >> b;
        dt = a;
        for (int i = 0; i < 60; i++){
            int x = dt|(1LL << i);
            if(x>b) break;
            dt = x;
        }
        cout << dt << endl;
    }
    return 0;
}