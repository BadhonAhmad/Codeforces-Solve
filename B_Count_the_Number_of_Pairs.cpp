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
    int ct,tc,f,sum,ans,t,x,y,z,i,k,a,b,c,d,n,m;
    cin >> tc;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp,pm;
        for(i = 0; i < n; i++){
            if(s[i]>='a' && s[i]<='z'){
                mp[s[i]]++;
            }
            else{
                pm[s[i]]++;
            }
        }
        char j = 'A';
        int mn;
        for (char i = 'a'; i <= 'z';i++){
            x = mp[i], y = pm[j];
            mn= min(x, y);
            ans += mn;
            x-=mn;
            y -= mn;
            x /= 2;
            y /= 2; 
            mn = min(m, max(x, y));
            ans += mn;
            m -= mn;
            j++;
        }
        cout << ans, nl;
    }
    return 0;
}

