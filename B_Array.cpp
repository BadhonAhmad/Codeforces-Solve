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
   
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n >> k;
        vll v(n);
        set<int> st;
        for (i = 0; i < n; i++){
            cin >> v[i];
        }
        for (i = 0; i < n; i++){
            st.insert(v[i]);
            if(st.size() == k){
                break;
            }
        }
        if(i == n) {
            cout << -1 << ' ' << -1;
            return 0;
        }
        st.clear();
        for (j = i; j >= 0; j--){
            st.insert(v[j]);
            if(st.size() == k)break;
        }
        cout << j + 1 << ' ' << i + 1;
        return 0;
}

