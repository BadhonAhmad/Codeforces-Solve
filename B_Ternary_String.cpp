/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,d,x,y,z,ans=0,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>s;

    n = s.size();

    set <int> st1;//st{0};
    
    j = n - 1;
    for ( i = 0; i < n; i++)
    {
        st1.insert(s[i]);
    }
    if(st1.size() != 3){
        cout << 0 << e;
        return;
    }
    
    while (1)
    {
        set<int> st; // st{0};
        st.insert(s[j]);
        j--;
       
        ct = 1;
        while (st.size()<3)
        {
            while (s[j] == s[j-1])
            {
                j--;
            }
            ct++;
            st.insert(s[j]);
            
            j--;
        }
        
        mn=min(mn,ct);
        
        if(mn == 3 || j < 0){break;}
    }
    cout << mn << e;

    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}