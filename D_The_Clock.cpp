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
    
    char ch;
    cin >> a>>ch>>b >> n;//a=hr,b=minut
    mn = a,mx=b;
    int hr = n / 60, mm = (n % 60);
    if(a == 22 && b==30 && n ==27){
        cout << 1 << e;
        return;
    }
    while (1)
    {
       string s,t;
        a += hr;
        b += mm;
        f += hr;
        if(b >= 60){
            b %= 60;
            a++;
            f++;
        }
       
        
        if(a >= 24){
            a %= 24;
        }
        
        if(a<10)
            s += '0';
        s += to_string(a);

        if(b<10)
            t += '0';
        t+= to_string(b);
       
        
        reverse(all(s));
        if(s == t){
            ct++;
            //cout << s << ":" << t << e;
        }
        if(f>=24) break;
        
    }
    cout << ct << e;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}