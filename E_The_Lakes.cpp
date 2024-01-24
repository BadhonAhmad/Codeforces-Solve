/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e3 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

bool vis[N][N];

int vs[N][N];
int n, m;
int sm = 0;
int ax[] = {0,0,-1,1};
int bx[] = {1,-1,0,0};
void dfs(int row,int col)
{
    
    sm += vs[row][col];
    vis[row][col] = true;

    for (int k = 0; k < 4; k++){
        int x = ax[k] + row;
        int y = bx[k] + col;
        if(x && y && !vis[x][y] && x<=n && y<=m && vs[x][y]){
            dfs(x, y);
        }
    }
    
}
void solve()
{
    int i, j, k, a, b, c,  ct = 0,  f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    memset(vis, false, sizeof(vis));
    sm = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++){
            cin >> vs[i][j];
        }
    }
    // for (i = 0; i < n; i++){
    //     for (j = 0; j < m; j++){
    //         cout << vs[i][j] << ' ';
    //     }
    //     cout << e;
    // }
    int ans = 0;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            if(vis[i][j] == false && vs[i][j] != 0){
                sm = 0;
                dfs(i, j);
                ans = max(ans, sm);
            }
        }
    }
    cout << ans << e;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}