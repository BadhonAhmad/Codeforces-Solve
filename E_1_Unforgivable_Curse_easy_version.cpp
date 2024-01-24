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
    int ct,tc,f,sum,ans,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n >>k;
        string s,t;
        cin >> s;
        cin >> t;
        // if(n <= 3){
        //     if(s == t){
        //         yes;
        //         continue;
        //     }
        //     else{
        //         no;
        //         continue;
        //     }
        // }
        // else if(n == 4){
        //     if(s[1] != t[1] || s[2] != t[2]){
        //         no;
        //         continue;
        //     }
        // }
        // else if(n == 5){
        //     if(s[2] != t[2]){
        //         no;
        //         continue;
        //     }
        // }
        for(i = 0; i < n; i++){
            if(i+k >= n && i-k<0){
                if(s[i] != t[i]){
                    no;
                    f = 1;
                    break;
                }
            }
        }
        if(f) continue;
        sort(all(s));
        sort(all(t));
        if(s == t){
            yes;
        }
        else{
            no;
        }
    }
    return 0;
}

