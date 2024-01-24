#include <bits/stdc++.h>
using namespace std;

#define e  "\n"


void solve()
{
    int n;
    cin >> n;
    vector<int> v1, v2;
    int hiev = 2 * n-2,hiod=2*n-3;
    int loev = 2;
    int lood = 1;
    int f = 0;
    v1.push_back(2*n);
    v2.push_back(2 * n - 1);
    for (int i = 0; i < n - 1; i++){
        if(f == 0){ 
            v1.push_back(loev);
            loev+=2;
            f = 1;
        }
        else{
            v1.push_back(hiev);
            hiev-=2;
            f = 0;
        }
    }
    f = 0;
    for (int i = 0; i < n - 1; i++){
        if(f == 0){
            v2.push_back(lood);
            lood += 2;
            f = 1;
        }
        else{
            v2.push_back(hiod);
            hiod -= 2;
            f = 0;
        }
    }
    reverse(v2.begin(), v2.end());
    for(auto it:v1){
        cout << it << ' ';
    }
    cout << e;
    for(auto it:v2){
        cout << it << ' ';
    }
    cout << e;
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