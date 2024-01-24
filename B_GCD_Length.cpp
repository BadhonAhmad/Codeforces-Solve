#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1000000007;
int n, m;
int dp[1000][1000];
char ch[1002][1002];
int f(int r, int c)
{
    if (r == n - 1 && c == m - 1)
        return 1;
    if (r >= n || c >= m)
        return 0;
    if (ch[r][c] != '#' && dp[r][c] != -1)
        return dp[r][c];
    int res = 0;
    if (ch[r + 1][c] != '#')
        res = (res + f(r + 1, c)) % N;
    if (ch[r][c + 1] != '#')
        res = (res + f(r, c + 1)) % N;

    return dp[r][c] = (res % N);
}

int32_t main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ch[i][j];
        }
    }
    cout << f(0, 0);
}