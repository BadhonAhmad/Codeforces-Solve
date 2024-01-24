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
    cin >> tc >> n;
    vll v(tc);
    for ( i = 0; i < tc; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    i = 0;
    j = 1;
    while (i<tc)
    {
        if(abs(v[j]-v[i])>n){
            i++;
            j = i + 1;
        }
        else{
            if(v[j]-v[i] == n)
                cnt++;
            j++;
        }
    }
    cout << cnt << endl;

    return 0;
}

