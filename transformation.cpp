#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=1e5+10;
using namespace std;
ll a, b;  
vector<ll> ans;
void dfs(){
    if(b%2 != 0 and b%10 != 1 or b<=a )
        return;
    else{
        if(b%2 == 0){
            b /= 2;
            ans.pb(b);
            dfs();
        }
        else{
            b /= 10;
            ans.pb(b);
            dfs();
        }
    }
}
int main()
{
    fastio;
    int tc;
    ll cnt = 0, f = 0, sum = 0,  t,x, y, z, i, j, k,  c, n, m;
  
    string s,s1,s2;
    cin >> a >> b;
    ans.pb(b);
    dfs();
    if(a != b)
        no;
    else{
        yes;
        cout << ans.size() << e;
        for ( int i = ans.size()-1; i >=0 ; i--)
        {
            cout << ans[i] << " ";
        }
        
        
    }
    return 0;
}

