#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e6 + 10;
vector<int> prime_divisor[N];
int32_t main()
{
    for (int i = 2; i < N; i++){
        if(prime_divisor[i].empty()){
            for (int j = i; j < N; j+=i){
                prime_divisor[j].push_back(i);
            }
        }
    }
    
    int n;

    cin >> n;
    int c[n + 2];
    memset(c, 0, sizeof(c));
    for (int i = 1; i <= n; i++){
        int x = 1;
        for(auto d:prime_divisor[i]){
            int cnt = 0;
            int temp = i;
            if(temp%d == 0){
                while (temp%d == 0)
                {
                    cnt++;
                    temp /= d;
                }
                if(cnt%2 == 1)
                    x *= d;
            }
        }
        c[x]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        ans += c[i] * c[i];
    }
    cout << ans;
}