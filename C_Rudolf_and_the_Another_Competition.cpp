#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n, m, h, k, i, j,x;
    cin >> n >> m >> h;

    int pos = 1;
    int rd = 0, solvedrd = 0,ct,sol;
    for (i = 0; i < n; i++)
    {
        vector<int> v(m);
        for (j = 0; j < m; j++)
        {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        int p=0;
        ct=0;
        sol=0;
        for (k = 0; k < m; k++)
        {
            if((p+v[k])>h) break;
            p+=v[k];
            ct+=p;
            sol++;
        }
        if (i != 0)
        {
            //cout<<ct<<endl;
            if(solvedrd < sol)
                pos++;
    
            else if(solvedrd == sol){
                if(rd > ct)
                    pos++;
            }
        }
        if (i == 0)
        {
            rd = ct;
            solvedrd =sol;
        }
    }
    
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << pos << endl;
    }
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