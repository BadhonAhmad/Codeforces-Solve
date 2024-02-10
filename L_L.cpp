    /**Everyone who is taken by death asks for more time, while 
    everyone who has time makes excuses for procrastination.
    --Ali Ibn Abi Talib(Ra)**/


    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes\n"
    #define all(a) a.begin(), a.end()
    #define allr(a) a.rbegin() , a.rend()
    #define no cout << "No\n"
    #define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
    #define db(x) cout << #x << " = " << x << " , " << '\n';
    #define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
    #define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
    int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

    void solve(){
        int n, k, i;
        cin >> n >> k;
        vector <int> v(n);
        map <int, int> mp;
        for(i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int ct = 0;
        for(auto i : mp){
            if(i.second >= 2){
                ct += i.second;
            }
        }
        if(ct >= k){
            yes;
        }
        else no;

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
