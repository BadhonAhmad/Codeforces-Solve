/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) (x & (1LL << k)) //(1&(x>>k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 3e6 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/
int prime[N];
void siv(int n)
{

    memset(prime, true, sizeof(prime));

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j * j <= n; j += i)
                prime[j] = false;
        }
    }
}
void solve()
{
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;

    cin >> n;
    sm = n;
    for (int i = 2; i <= 3000000; i++)
    {
        if (prime[i] && n % i == 0)
        {
            int p = i;//
            int baki = n / p;
            if(baki%p == 0){
                cout << p << ' ' << baki / p << e;
                return;
            }
            else{
                int q = sqrtl(baki + 1);
                cout << q <<' '<< p << e;
                return;
            }
        }
    }
    //cout << "hi" << e;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    siv(3000000);
    cin >> T;
    while (T--)
        solve();
    return 0;
}
