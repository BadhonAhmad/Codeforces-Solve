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
    cin >> n >> s;
    for(i = 1; i <= n; i++){
        if(s[i-1] == 'L'){
            sm += i - 1;
        }
        else {
            sm += n - i;
        }
    }
    
        i = 1, j = n ;

        for (; i <= j; ){
        a = n - i;
        b = j - 1;
        if (s[i - 1] == 'L' && f==0)
        {
            sm -= i - 1;
            sm += n - i;
            cout << sm << ' ';
            ct++;
            i++;
            f = 1;
            continue;
            }else if(f == 0){
                i++;
                f = 1;
            }
            if(s[j-1] == 'R' && f==1){
                sm -= n - j;
                sm += j - 1;
                cout << sm << ' ';
                j--;
                f = 0;
                ct++;
                continue;
            }
            else if(f==1){ 
                j--;
                f = 0;
            }
        }
        if(ct<n){
            while (ct<n)
            {
                cout << sm << ' ';
                ct++;
            }

        }
        cout << e;

        return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}