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
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> n >> m;
    ct = 0;
    sum = 0;
    set<string> sp,se,sk,sj;
    string s;
    for (i = 0; i < n + m; i++){
        cin >> s;
        sp.insert(s);
    }
    if(n+m-sp.size()>0){
        c = n + m - sp.size();
        n -= c;
        m -= c;
        if(c%2){
            n += c / 2 + 1;
            m += c / 2;
        }
        else{
            n += c / 2;
            m += c / 2;
        }
    }
    if(n>m){
        yes;
    }
    else
        no;
    return 0;
}

