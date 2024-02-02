#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
int32_t main()
{
    fastio;
    int ct,tc,f,sum,t,i,j,k,a,b,c,d,n,m;
    int x,y;
    double z=0;
    scanf("%lld%lld", &a, &b);
    vll ar(a);
    for(i = 0; i < a; i++){
        scanf("%lld", &ar[i]);
    }
    sort(all(ar));
    
    z = LONG_LONG_MIN;
    for(i = 1; i < a; i++){
        if(ar[i]-ar[i-1]>z){
            z = ar[i] - ar[i - 1];
        }
    }
    int  ans = max(ar[0] - 0, b - ar[a- 1]);
    z /= 2;
    if(z>ans)
        cout<<setprecision(10)<<fixed<<z;
    else
        cout<<setprecision(10)<<fixed<<(double)ans;
      
    return 0;
}

