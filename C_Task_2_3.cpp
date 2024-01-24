#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e7 + 10;

bool isPrime[N];
vector<int> prime;
int32_t main()
{
    int t ,cs = 1;
    cin >> t;
    for(int i = 0; i < N;  i++) isPrime[i] = 1;
    isPrime[0] =isPrime[1] = 0;
    int sq= sqrt(N);
    for(int i =2; i < sq; i ++){
        if(isPrime[i] == 1){
            for(long long j = 2 * i; j < N; j += i){
                isPrime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        if(isPrime[i] == 1){
            prime.push_back(i);
        }
    }
    while (t--)
    {
        int n ;
        cin >> n;
        int ct = 0;
        
        for(int i = 0 ; prime[i] <= n / 2; i++){
            int a = n - prime[i];
            if(isPrime[a] == 1) ct++;
        }
        cout << "Case "  << cs++ <<": " << ct << endl;
    }
}