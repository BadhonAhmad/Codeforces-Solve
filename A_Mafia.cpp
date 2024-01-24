#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
int n, sum,mx=LONG_LONG_MIN;
int check(int mid){
    if(mid*(n-1)>=sum && mid>=mx){
        return 1;
    }
    else
        return 0;
}
int32_t main()
{
    fastio;
    int ct,tc,f,i,ans=LONG_LONG_MAX; 
        ct = 0,f = 0,sum = 0;  
        cin >> n;
        vll v(n);
        for(i = 0; i < n; i++){
            cin>>v[i];
            sum += v[i];
            mx = max(mx, v[i]);
        }
        int lo = 0, hi = 1e10,mid;
        while (lo<=hi)
        {
            mid = (lo + hi) >> 1;
            if(check(mid)){
                hi = mid - 1;
                ans = min(mid, ans);
            }
            else {
                lo = mid + 1;
            }
        }
        cout << ans;
        return 0;
}

