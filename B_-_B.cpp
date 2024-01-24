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
ll n, m;
string s[N];
vector<vector<bool>> col;
void dfs(int i,int j,char c){
    if(s[i][j]=='.' && col[i][j]==0){
        col[i][j] = 1;
        if(c=='x')
            s[i][j] = 'y', c = 'y';
        else
            s[i][j] = 'x', c = 'x';
        if(j<m-1)
            dfs(i, j + 1, c);
        if(i>0)
            dfs(i - 1, j, c);
        if(i<n-1)
            dfs(i + 1, j, c);
        if(j>0)
            dfs(i, j - 1, c);
    }
    return;
}
int main()
{
    fastio;
    ll cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c;
    cin >> n >> m;
    col.assign(101, vector<bool>(101, 0));
    for ( i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(s[i][j] == '.' and col[i][j] == 0){
                char c = 'x';
                dfs(i, j, c);
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if(s[i][j]=='-')
                cout << "-";
            else if(s[i][j]=='x')
                cout << "B";
            else if(s[i][j] == 'y')
                cout << "W";
        }
        cout << e;
    }
    
    
    
    return 0;
}

