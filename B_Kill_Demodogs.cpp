#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt 1000000007
 long long  M = 1000000007;
using namespace std;

int main()
{
    fastio;
    unsigned long long tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        x = n*((((n - 1) % M) * ((4 * n + 1) % M)) % M+(6*n))%M;
        cout << (x * 337)%M << endl;        
    }
    return 0;
}

