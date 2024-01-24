#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"No") << "\n"
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
        map<int,int>mp;
        vll v(n);
        for(i = 0; i < n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        z = LONG_LONG_MIN;
        for(auto it:mp){
            z = max(it.second, z);
        }
        if(n%2 == 0 && z <=(n/2) && mp.size()>=2)
            yes;
       else if(n%2 && z <= ((n/2)+1) && mp.size()>=2)
            yes;
        else
            no;
    }
    return 0;

    
}

