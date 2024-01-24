#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s1,t,s2;
    cin>>n;
    t = to_string(n);
    if(n<10)
        cout << 1;
    else{
        ct = 0;
        for (int i = 1; i*i <= n; i++){
            if(n%i == 0){
                s1 = to_string(i);
                s2 = to_string(n / i);
                f = 0,a=0;
                if(s1==s2){
                    a = 1;
                }
                for (int i = 0; i < t.size(); i++){
                    for (int j = 0; j < max(s1.size(),s2.size()); j++){
                        if(t[i] == s1[j] && f==0){
                            f = 1;
                            ct++;
                        }
                        if(t[i] == s2[j] && a == 0){
                            a = 1;
                            ct++;
                        }
                    }
                }
            }
        }
        cout << ct;
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}