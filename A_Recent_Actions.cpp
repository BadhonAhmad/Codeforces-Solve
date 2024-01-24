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
        cin >> n >> m;
        vll v(m);
        set<int> s;
        ct = 0;
        for(i = 0; i < m; i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        if(s.size() >= n){
            vll va;
            j = 1;
            set<int> st;
            for (i = 0; i < m; i++){
                y = st.size();
                st.insert(v[i]);
                if(y == st.size()){
                    j++;
                }
                else{
                    va.pb(j++);
                    ct++;
                }
                if(ct == n){
                    break;
                }
            }
            reverse(all(va));
            for(auto it:va){
                cout << it << " ";
            }
            nl;
        }
        else{
            x = n - s.size();
            for (i = 1; i <= x; i++){
                cout << -1 << " ";
            }
             vll va;
            j = 1;
            set<int> st;
            for (i = 0; i < m; i++){
                y = st.size();
                st.insert(v[i]);
                if(y == st.size()){
                    j++;
                }
                else{
                    va.pb(j++);
                    ct++;
                }
                if(ct == n){
                    break;
                }
            }
            reverse(all(va));
            for(auto it:va){
                cout << it << " ";
            }
            nl;
        }
    }
    return 0;
}

