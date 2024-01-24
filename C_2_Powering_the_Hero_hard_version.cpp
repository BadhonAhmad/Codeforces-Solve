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
    cin >> tc;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n;
        x = LONG_LONG_MIN;
        y = LONG_LONG_MIN;
        string s1,s2,s3;
        vll v(n+1);
        int id;
        multiset<int> vd;
        vll maxi(n+1);
        set<int>st;
        j = 1;
        for(i = 1; i <= n; i++){
            cin>>v[i];
            if(v[i] != 0){
                vd.insert(v[i]);
                ct++;
            }
            else if(v[i] == 0 ){
                if(vd.empty()){
                    continue;
                }
                auto it = vd.end();
                it--;
                ans += *it;
                vd.erase(it);
            }
        }
        as;
    }
    return 0;
}

