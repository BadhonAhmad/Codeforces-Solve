/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int n, m,i,j;
    cin >> n >> m;
    int ar[n];
    for (i = 0; i < n; i++){
        cin >> ar[i];
    }

    int x;
    map<int, pair<int, int>> mp;

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            x = m - ar[i] - ar[j];
            if(mp.size() == 0){
                break;
            }
            if(mp.find(x) != mp.end()){
                if( i+1 != j+1 && i+1 != mp[x].first && i+1 != mp[x].second && j+1 != mp[x].first && j+1 != mp[x].second){
                    cout << i + 1 << " " << j + 1 << ' ' << mp[x].first << ' ' <<mp[x].second;
                    return;
                }
            }
        }
        for (int k = i+1; k < n; k++){
            int s = ar[i] + ar[k];
            mp[s] = {i + 1, k + 1};
        }
    }
    cout << "IMPOSSIBLE";
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}