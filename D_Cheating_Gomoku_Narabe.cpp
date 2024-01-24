    /**Everyone who is taken by death asks for more time, while 
    everyone who has time makes excuses for procrastination.
    --Ali Ibn Abi Talib(Ra)**/


    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "YES\n"
    #define all(a) a.begin(), a.end()
    #define allr(a) a.rbegin() , a.rend()
    #define no cout << "NO\n"
    #define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
    #define db(x) cout << #x << " = " << x << " , " << '\n';
    #define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
    #define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
    int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

    void solve(){
        int n,m,k;
        cin >> n >> m >> k;
        char s[n+1][m+1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m;j++){
                cin >> s[i][j];
            }
        }
        // for(int i = 1; i <= n; i++){
        //     for(int j = 1; j <= m;j++){
        //         cout << s[i][j];
        //     }
        //     cout << '\n';
        // }
        int mn = LONG_LONG_MAX;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j + k <= m; j++)
            {
            int ct = 0,prev = j;
            int kk = 0;
                if(s[i][j] != 'x'){
                    while (s[i][j] != 'x' && kk < k)
                    {
                        kk++;
                        if(s[i][j] == '.'){
                            ct++;
                        }
                        j++;
                    }
                    if(kk == k){
                        j = prev + 1;
                        mn = min(mn, ct);
                    }
                    else j--;
                }
            }
        }
        
        for(int j = 1; j <= m; j++){
            
            for(int i = 1; i + k <= n; i++){
                int ct = 0,prev = i;
                if(s[i][j] != 'x'){
                    int kk = 0;
                    while (s[i][j] != 'x' && kk < k)
                    {
                        kk++;
                        if(s[i][j] == '.'){
                            ct++;
                        }
                        i++;
                    }
                    if(kk == k){
                        i = prev + 1;
                        mn = min(mn, ct);
                    }else i--;
                }
            }
        }
        if(mn == LONG_LONG_MAX){
            cout << -1 ;
        }
        else
        cout << mn ;

    }
    int32_t main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        int T=1;
        //cin>>T;

        while(T--) 
        solve();

        return 0;
    }
