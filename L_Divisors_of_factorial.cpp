/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/
 bool isPrime[50000];
void sieve(long long N) {
    for(long long i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(long long  i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             for(long long j = i * i; j <= N ;j += i)
                 isPrime[j] = false;
        }
    }
}
 
void solve()
{
	int i,j,a,b,c,sm=0,n,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
	cin>>n;
	i = 1;
	int ans = 1;
	while (1)
	{
		
		if(i>n) break;
		if(isPrime[i]){
			int a = i;
			sm = 0;
			while ((n/a) >0 )
			{
				c = n;
				sm += (c / a);
				a *= i;
			}
			ans = (ans * (sm+1))%mod;
		}
		i++;
	}
	cout << ans % mod << e;
	return;
}
	 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T = 1;
	sieve(50000);
	cin >> T;
	while (T--)
		solve();
	return 0;
}