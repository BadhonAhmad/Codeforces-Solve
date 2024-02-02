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
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> n;
    map<string, int> mp;
    queue<string> q;
    for (i = 0; i < n + 2; i++){
        string s;

        cin >> s;
        q.push(s);
        mp[s]++;
    }
    x = mp["pair"];
    if(x != n-1){
        cout << "Error occurred\n";
    }
    else{
        ct = 0;
        while (!q.empty())
        {
            cout<<q.front()
        }
        
    }
    return 0;
}

