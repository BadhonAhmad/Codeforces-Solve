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
    cin >> n >> k;
    map<ll, ll> mp;
    vll v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[i]=(v[i]+k);
    }
    i = 0;
    sort(all(v));
    for(auto it:mp){
        cout << it.second << " ";
    }
    cout << e;
    for(auto it: mp){
        if(it.second == v[i++])
            cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}

