/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t[100];
    cin>>n;
    cin >> s;
    // vaporeon, jolteon, flareon, espeon, umbreon, leafeon, glaceon, sylveon.

    for (i = 0; i < s.size(); i++){
        if(s[i] !='.')
            sm++;
    }
    t[0] = "jolteon"; // 7
    t[1] = "flareon";//7
    t[2] = "umbreon";//7
    t[3] = "leafeon";//7
    t[4] = "glaceon";//7
    t[5] = "sylveon";//7
    if(n == 8){
        cout << "vaporeon";
    }
    else if(n == 6){
        cout << "espeon";
    }
    else{
        for (i = 0; i <= 5; i++){
            ct = 0;
            for (j = 0; j < s.size(); j++){
                if(s[j] != '.'){
                    if(t[i][j] == s[j]){
                        ct++;
                        j++;
                        while (j<s.size())
                        {
                            if(s[j] == t[i][j]){
                                ct++;
                            }
                            j++;
                        }
                        if(ct == sm){
                            cout << t[i];
                            return;
                        }
                    }
                }
            }
        }
    }
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}