#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int N=1e7+10;
int is_prime[N];
vector<int>prime;
map <int, int> mp;
void primeGen ( int n ) // give sqroot of given n while computing prime facto of n;
{
    n += 10;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;
 
    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }
 
    is_prime[2] = 1;
    prime.push_back (2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

vector<int>factors;
void factorize(int n){
    int sq=sqrt(n);
    for(int i=0; i<prime.size() && prime[i]<=sq; i++){
        if(n%prime[i] == 0){
            while (n%prime[i] == 0)
            {
                n/=prime[i];
                factors.push_back(prime[i]);
                mp[prime[i]]++;
            }
            sq=sqrt(n);
        }
    }

    if(n>1) 
        factors.push_back(n),mp[n]++;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    primeGen(1000000);
    factorize(1000000);
    cin >> t;
    while(t--){ 
        int n; 
        cin>>n;
        sort(factors.begin(),factors.end());
        //
        vector<int > mul,anss;
        int ml = 1;
        for(auto i : factors){
            ml *= i;
            mul.push_back(ml);
        }
        int ct = 0;
        while (factors.size() != 0)
        {
            int a = factors.back();
            factors.pop_back();
            int x = 0;
            x = mp[x];
            ct += x;
            while (x--)
            {
                /* code */
                anss.push_back(mul.back());
            }
            mul.pop_back();
        }
        
    }
    
    return 0;
}