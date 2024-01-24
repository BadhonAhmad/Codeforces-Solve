#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=2e5+10;
using namespace std;
int main()
{
    fastio;
    ll cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {  
        cin >> x>>y;
        cnt = 0;
        ll ar[100]={0};
        for ( i = 1; i <= y; i+=cnt)
        {
            ar[i] = i;
            cnt++;
        }
        for (i = y; i>=0 and cnt<x; i--)
        {
            if(!ar[i])
                ar[i] = 1;
            cnt++;
        }
        cnt = 0;
        for ( i = 1; i!=x; i++,cnt++)
        {
            cout << ar[i] << " ";
        }
        cout << e;
    }
    return 0;
}

