/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,a,b,c,sm=0,n,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    cin>>n;
    if(n ==1){
        cout << 1 << e;
        cout << 1;
        return;
    }
    if(n == 4){
        cout << 4 << e;
        cout << 3 << ' ' << 1 << ' ' << 4 << ' ' << 2;
        return;
    }
    if(n<4 )//5 = 1 3 5 2 4 , 6 = 1 3 5 2 4 6 
    {
        cout << n - 1 << e;
        a = (n + 1) / 2;
        int od = 1;
        for (i = 0; i < a; i++){
            cout << od << ' ';
            od += 2;
        }
        int ev = 2;
        for (i = 0; i < n - a - 1; i++){
            cout << ev << ' ';
            ev += 2;
        }
    }
    else{
        cout << n << e;
        a = (n + 1) / 2;
        int od = 1;
        for (i = 0; i < a; i++){
            cout << od << ' ';
            od += 2;
        }
        int ev = 2;
        for (i = 0; i < n - a; i++){
            cout << ev << ' ';
            ev += 2;
        }
    }
    return;
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