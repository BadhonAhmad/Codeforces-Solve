/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    /***********let's go***************/
    string s,t;
    cin >> k >> n;
    j = 1;
    int inc = 1;
    int befor;
    if(k == n){
        for(i = 1; i <= n; i++){
            cout << i << ' ';
        }
        cout << e;
        return;
    }
    while (k)
    {
        cout << j << ' ';
        befor = j;
        j += inc;
        inc++;
        k--;
        if((j+inc)>n){
            break;
        }
    }
    while (k)
    {
        cout << ++befor<<' ';
        k--;
    }
    cout << e;

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}