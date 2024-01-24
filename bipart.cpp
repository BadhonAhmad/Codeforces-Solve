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
vector<vector<int>> v(1000);
vector<int> col(1000, -1);
int flag;
void dfs(int node,int c){
    col[node] = !c;
    for(auto i: v[node]){
        if(col[i] == col[node]){
            flag = 1;
            return;
        }
        else if(col[i] == -1){
            dfs(i, !c);
        }
    }
    return;
}
int main()
{
    fastio;
    int tc;
    int cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    string s,s1,s2;
    while(1){   
    cin >> n;
    if(n == 0) break;
    cin >> m;
    for ( i = 0; i < m; i++)
    {
            cin >> x >> y;
            v[x].pb(y);
            v[y].pb(x);
    }
    dfs(0, -1);
    if(flag){
            cout << "NOT BICOLORABLE." << e;
    }
    else
            cout << "BICOLORABLE." << e;
    for ( i = 0; i < n; i++)
    {
            v[i].clear();
            col[i] = -1;
    }
    flag = 0;
    }
    return 0;

}

