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
bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int32_t main()
{
    // fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    scanf("%lld", &tc);
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        scanf("%lld", &n);
        vector<pair<int,int>>vp(n);
        for(i = 0; i < n; i++){
           scanf("%lld%lld", &vp[i].first , &vp[i].second);
        }
        sort(vp.begin(),vp.end(),cmp);
            for(i = 0; i < n; i++){
            printf("%lld %lld\n", vp[i].first , vp[i].second);
            }
        
    }
    return 0;
}

