    //  1 2 3 4 ->
    /*
        1 2
        1 3
        1 4
        2 3
        2 4
        3 4
        n * (n - 1) / 2 = 6
        n * n-1 = 12
        n2 - n - 12 = 0;
        1 + root(1 + 4 * 12)/2
        1 + 7 / 2


    */

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
    int f(int k){
        return k+(k*(k-1))/2;
    }
    void solve(){
        int n;
        cin >> n;
        int lo = 0,hi = 10000000000ll,mid, a,mn = LONG_LONG_MAX;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            a = f(mid);
            if(a < n){
                lo = mid + 1;
            }
            else {
                mn = min(mn, mid);
                hi = mid - 1;
            }
        }
        cout << mn << '\n';
        
    }
    int32_t main(){
        ios::sync_with_stdio(false);
        cin.tie(0);

        int T=1;
        cin>>T;

        while(T--) 
           solve();

        return 0;
    }
