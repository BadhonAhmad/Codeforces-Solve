/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
#include<string>
using namespace std;


#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, sm = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    cin >> a;
    string s,t;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    
    getline(cin>>ws,s);
    for (i = 0; i < s.size(); i++){
        if(s[i] == ' ')
            cout << " ";
        else{
            int x = s[i]-'a'-a;//98-97-2=-1
            if(x<0){
                cout << alph[26 - abs(x)];
            }
            else{
                cout << alph[x];
            }
        }
    }
    
    return;
}
int tt;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
 //   cin >> tt;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}