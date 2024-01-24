#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
int base(int l,int n){
    int start = 1, ans = 0;
    while (l>0)
    {
        int r = l % n;
        ans += (r*start);
        start *= 10;
        l /= n;
    }
    return ans;
}

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    b = n;
    vector<int> v;
    for(i = 1; i <= n-1; i++){
        for(j = 1; j <= n-1; j++){
            a = i * j;
            if(a<n)
            cout << i * j << ' ';
            else
            cout << base(a, n) << ' ';
        }
        cout << e;
    }
  

    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}