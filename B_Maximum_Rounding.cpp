#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin >> s;
    a = s.size();
    int ar[a];
    for (i = 0; i < a; i++){
        ar[i] = s[i]-'0';
    }
    for (i = a - 1; i > 0; i--){
        if(ar[i]>=5){
            ar[i-1]=ar[i-1]+1;
        }
    }
    for(i = 0; i < a; i++){
        if(ar[i]>=5 && f==0){
            if(i == 0){
                cout << 10;
            }
            else 
            cout << 0;
            f = 1;
        }else if(f==1){
            cout << 0;
        }
        else
            cout << ar[i];
    }
    cout << e;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}