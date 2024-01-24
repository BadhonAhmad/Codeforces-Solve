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
    int ct,tc,f,sum,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    while (tc--)
    {  
        cin >> n;
        set<pair<int, int>> st;
        vll v(n + 1);
        ct = 0;
        vector<pair<int, int>> ans;
        for (i = 1; i <= n; i++){
            cin >> v[i];
            if(v[i] == 1)
                ct++;
            st.insert({v[i], i});
        }
        sort(v.begin()+1,v.end());
        if(ct>0 && ct < n){
            cout << -1, nl;
            continue;
        }
        if(v[1] == v[n]){
            cout << 0, nl;
            continue;
        }
        while (true)
        {
            auto it = st.begin();
            auto it2 = st.end();
            it2--;
            int now1 = it->first;
            int now2 = it2->first;
            if(now1 == now2){
                break;
            }
            
            int in1 = it->second;
            int in2 = it2->second;
            now2=(now2 + now1 - 1) / now1;
            ans.push_back({in2, in1});
            st.erase(it2);
            st.insert({now2, in2});
        }
        cout << ans.size(), nl;
        for(auto i: ans){
            cout << i.first << " " << i.second, nl;
        }    
    }
    return 0;
}

