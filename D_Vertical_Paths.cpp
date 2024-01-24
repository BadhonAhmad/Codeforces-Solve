#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=2e5+10;
using namespace std;

int par[N];
bool isdone[N];
bool isleaf[N];
int main()
{
    fastio;
    ll cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;

    while (tc--)
    {
        ll root;
        cin >> n;
        for ( i =  1; i <= n; i++)
        {
            isdone[i] = 0;
            isleaf[i] = 1;
        }
        for ( i = 1; i <= n; i++)
        {
            cin >> par[i];
            if(i == par[i]){
                root = i;
                par[i] = -1;
                continue;
            }
            isleaf[par[i]] = 0;
        }
         vll leaf;
        for ( i = 1; i <= n; i++)
        {
            if(isleaf[i]){
                leaf.pb(i);
            }
        }
        cout << leaf.size() << endl;
        for (auto it : leaf)
        {
            vll v;
            int curr = it;
            while (curr != -1 && !isdone[curr])
            {
                v.pb(curr);
                isdone[curr] = 1;
                curr = par[curr];
            }
            reverse(all(v));

            cout << v.size() << e;
            for (auto it: v)
            {
                cout << it << " ";
            }
            cout << e;
        }
        
    }
    return 0;
}

