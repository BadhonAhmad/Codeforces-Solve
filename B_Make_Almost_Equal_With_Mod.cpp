#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define yes cout << "YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout << "NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve()
{
    int a = 0, b = 0, n, i, mn = LONG_LONG_MAX;
    cin >> n;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2)
        {
            a = 1;
        }
        else
            b = 1;
    }
    if(a && b ){
        cout << 2 << endl;
    }
    else{
        for(b = 2; b ; b *= 2){
            set <int> st;//st{0};
            for(int j= 0; j < n; j++){
                st.insert(v[j] % b);
            }
            if(st.size()  == 2){
                cout << b << endl;
                return;
            }
        }
    }
    
}


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
