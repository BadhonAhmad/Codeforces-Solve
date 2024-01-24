/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define sj size()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define deb(x) cout << #x << " = " << x << " , " << '\n';
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i, j;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    //size and datatype -> n x m, int
    vector< vector<int> > an(n, vector<int> (n,-1));
    int ct = 0, need = v[0]-1,now = v[0],id = 0;
    for(i = 0; i < n; i++){
        int x = i;
        int y = i;
        an[x][y] = v[i];
        for(j = 1; j < v[i]; j++){
            if(y > 0 && an[x][y-1] == -1){
                y--;
            }
            else x++;

            an[x][y] = v[i];
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout << an[i][j] <<' ';
        }
        cout <<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) solve();
    return 0;
}
