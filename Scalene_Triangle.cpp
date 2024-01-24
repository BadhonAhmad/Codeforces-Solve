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
const ll N=1e5+10;
using namespace std;

int main()
{
    fastio;
    int tc;
    ll cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    string s,s1,s2;
    cin >> tc;
    while (tc--)
    {
        vll v(3);
        set<ll> ss;
        for (size_t i = 0; i < 3; i++)
        {
            cin >> x;
            ss.insert(x);
        }
        if(ss.size() == 3){
            yes;
        }
        else
            no;

   
}
}

