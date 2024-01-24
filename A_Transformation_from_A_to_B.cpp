#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
//const ll N=1e5+10;
using namespace std;
void bfs(int st,int n){
    map<int, int> vis;
    map<int,int> par;
    vector<int> vc;
    queue<int> q;
    q.push(st);
    int v, vv,u, flg = 0;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        vis[u] = 1;
        v = u * 2;
        if(vis[v] == 0 && v <= n){
            vis[v] = 1;
            par[v] = u;
            q.push(v);
            if(v == n){
                flg = 1;
                break;
            }
        }
        vv = 10 * u + 1;
        if(vis[vv] == 0 && vv<=n){
            vis[vv] = 1;
            par[vv] = u;
            q.push(vv);
            if(vv == n){
                flg = 1;
                break;
            }
        }
        if(flg){
           int p = par[n];
           vc.push_back(p);
           while (p != st)
           {
                p = par[p];
                vc.pb(p);
           }
           yes;
           cout << vc.size() + 1 << e;
           for (int i = vc.size()-1; i >=0; i--)
           {
                cout << vc[i] << " ";
           }
           cout << n << e;
        }
        else
           no;
    }
}
signed main()
{
    
    int a;
    int b;
    cin >> a >> b;
    bfs(a, b);
    return 0;
}

