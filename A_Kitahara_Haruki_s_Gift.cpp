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
    int i,j,k,a=0,b=0,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n);
    map<int, int> mp;
    for(i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    if(n == 1){
         no;
        return;
    }
    a = mp[100];
    b = mp[200];
    if((a == 0 &&  b%2 == 0)|| (b == 0 && a%2 == 0)){
        yes;
        return;
    }
    if((b == 0 && a%2) ||(a == 0 && b%2)){
        no;
        return;
    }
    if(a%2 == 0 && b%2 == 0)//1.all positive
        yes;
    //a odd,b even
    else if(a%2 && b%2 == 0)
        no;
    else if(a%2 == 0 && b%2)
        yes;
    else
        no;
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