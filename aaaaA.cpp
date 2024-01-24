#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;
using namespace std;

/**********************************************************************/
bool prime[100000];
void primes(int n){
    memset(prime, true, sizeof(prime));
    for (int i = 2; i*i < n; i++)
    {
       
        if(prime[i]==true){
            for (int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }

}
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    
    cin >> n >> m;
    vll v(n);primes(100000);
    vll vp(n);
    for ( i = 0; i < n; i++)
    {
        cin >> v[i];
        if(prime[v[i]] == true){
            cnt++;
            vp[i] = cnt; 
        }
        else{
            vp[i] = cnt;
        }
    }
    for (j = 0; j < n; j++){
        cout << vp[j] << " ";
    }
     
    return 0;
}

