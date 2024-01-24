#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
    int T, a, b, i;
    cin >> T;
    set<int> st1, st2;
    for (i = 0; i < T; i++)
    {
        cin >> a >> b;
        st1.insert(a);
        st2.insert(b);
    }
    if (T == 1)
    {
        cout << -1;
    }
    else
    {
        
            if (st1.size() != 2 || st2.size() != 2)
            {
                cout << -1;
            }
            else{
                int a = *(st1.begin());
                st1.erase(st1.begin());
                int b = *(st1.begin());
                int c = *(st2.begin());
                st2.erase(st2.begin());
                int d = *(st2.begin());
                cout << abs(a - b) * abs(c - d);
            }
    }
}