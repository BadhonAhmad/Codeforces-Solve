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
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans=0,t,x,y,z,i,j,k,a,b,c,d,n,m,pos,l,r;
    cin >> n >> pos >> l >> r;
    if(pos>r){
        if(l>1)
            ans = pos - r + 2 + r - l;
        if(l == 1)
            ans = pos - r + 1;
        as;
        return 0;
    }
    if(pos<l){
        if(r == n)
            ans = l - pos + 1;
       else
            ans = l - pos + 2 + r - l;
        as;
        return 0;
    }
    if(l == 1 && r == n){
        cout << 0;//6 3 2 4
        return 0;
    }
    if(l == 1){
        ans = r - pos + 1;
        as;
        return 0;
    }
    if(r == n){
        ans = pos - l + 1;
    }
    else{
        x = pos - l;
        y = r - pos;
        ans = min(x, y) * 2 + max(x, y) + 2;
    }
    cout << ans, nl;
    return 0;
}

