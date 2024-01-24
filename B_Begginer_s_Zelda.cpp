#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
	int n; 
	cin >> n;
	map <int, int> mp;
	for(int i = 0; i < n-1; i++){
		int a, b;
		cin >> a >> b;
		mp[a]++;
		mp[b]++;
	}
	int ct = 0;
	for(int i = 1; i <= n; i++){
		if(mp[i] == 1) ct++,mp[i] = 0;
	}
	cout << (ct + 1) / 2 << endl;
}

int32_t main(){
	ios::sync_with_stdio(false);cin.tie(0);

	int t=1;
	cin >> t;

	while(t--)
		solve();

	return 0;
}

