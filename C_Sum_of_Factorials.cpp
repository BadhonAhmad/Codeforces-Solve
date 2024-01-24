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
int factor[20];
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    int l = 1;
    factor[0] = 1;
    for (i = 1; i <= 20; i++){
        factor[i] = l * i;
        l = factor[i];
    }
    ct = 1;
    while (tc--)
    {
        ans = 0,  f = 0, sum = 0;
        cin >> n;
        vll v;
        for (i = 20; i >=0; i--){
            if(factor[i] <= n){
                n -= factor[i];
                v.pb(i);
            }
        }
        cout << "Case "<< ct++
                 << ": " ;
        if(n == 0){
            
            for (i = v.size() - 1; i > 0;i--){
                if(v[i] == 1 && ct == 3)
                    cout << "0!+";
                else
                    cout << v[i] << "!+";
            }
            cout << v[0] << "!\n";
        }
        else
            cout << "impossible"<< "\n";
        v.clear();
    }
    return 0;
}

