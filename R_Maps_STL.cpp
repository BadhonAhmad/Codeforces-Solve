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
    map<string, int> mp;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        
        string s1,s2,s3;

        cin >> n >> s1;
        if(n == 1){
            cin >> m;
            mp[s1] += m;
        }
        if(n == 2){
            mp[s1] = 0;
        }
        if(n == 3){
            cout << mp[s1], nl;
        }
    }
    return 0;
}

