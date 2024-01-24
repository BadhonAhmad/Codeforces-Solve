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
    int n, m,i,j;
    int len,d=-1;
    cin>>n>>m;
    int x[10];
    memset(x, 0, sizeof(x));
    for (i = 1; i < 10; i++){
        x[i] = i % m;
        if(x[i] == 0){
            len = 1;
            d = i;
        }
    }
    for (i = 2; i <=n; i++){
        for (j = 1; j < 10; j++){
            x[j] = (x[j] * 10 + j) % m;
            if(x[j] == 0){
                len= i;
                d = j;
            }
        }
    }
    if(d == -1){
        cout << -1;
    }
    else{
       while (len--)
       {
            cout << d;
       }
       
    }
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}