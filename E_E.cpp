#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"Yes\n"
#define no      cout<<"No\n"
#define mod     1000000007

int powerMod(int a,int b){
	if(b == 0)
		return 1 % mod;
	if(b%2 == 0){
		int x = powerMod(a, b / 2);
		return (x * x) % mod;
	}
	else{ 
		int x = powerMod(a, b / 2);
		return ((x * x) % mod * a) % mod;
	}
	return 0;
}

int inverseMod(int a){
	return powerMod(a, mod - 2);
}
void solve()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= b; i++){
        if((a*i)%b == 1){
            yes;
            return;
        }

    }
    no;
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