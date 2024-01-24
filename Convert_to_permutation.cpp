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

int main()
{
    fastio;
    int tc;
    int cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
   
    cin >> tc;
    while (tc--)
    {  
        cin >> n;
        set<int> s;
        vector<int> same;
        vector<pair<int, bool>> v;
        cnt = 0,f=0;
        c = 0;
        for ( i = 0; i < n; i++)
        {
            j = s.size();
            cin >> x;
            if(x == 0){
                c = 12;
            }
            if(x==n){
                cnt++;
            }
            if(x>n){
                f = 1;
            }
            v.pb(make_pair(x, 1));
            s.insert(x);
            k = s.size();
            if(j == k){
                same.pb(x);
            }
        }
        //cout << s.size() << "h" << e;
       
        if(f==1|| cnt>1){
            cout << -1 << e;
            continue;
        }
        if(c==12&&s.size() == n){
            cout << n << e;
            continue;
        }
        m=0;
        ans = 0;
        for ( i = 1; i <= n; i++)
        {
            if(v[i].second == false){
                ans += abs(same[m++] - i);
            }
        }
        cout << ans << e;
        s.clear();
        v.clear();

        same.clear();
    }
    return 0;
}

