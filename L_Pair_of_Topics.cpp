#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
	int n;
	cin >> n;
	int a[n], b[n];
	vector<int> v;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
		v.push_back(a[i] - b[i]);
	}
	sort(v.begin(), v.end());
	int ans = 0, cnt = 0;
	for (int j = 0; j < n; j++){
		int x = b[j] - a[j];
		cnt = n - ((upper_bound(v.begin(), v.end(), x) - v.begin()));
		if(a[j]-b[j]>b[j]-a[j])
			cnt--;
		ans += cnt;
	}
	cout << ans / 2;
}