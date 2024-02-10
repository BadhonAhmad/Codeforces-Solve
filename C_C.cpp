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
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
    template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
    void solve(){
        int a,n;
        cin >> n;
        char ch;
        set<int> st;
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> ch >> a;
            if(ch == 'I'){
                st.insert(a);
                v.push_back(a);
            }
            else if(ch == 'D'){
                if(st.find(a) != st.end())
                    st.erase(st.find(a));
            }
            else if(ch == 'K'){
                if(a > st.size()){
                    cout << "invalid\n";
                }
                else{
                    int ct = 1;
                }
            }
            else{
                int ct = 0,f = 0;
                for(auto i : st){
                    if(i >= a){
                        cout << ct << '\n';
                        f = 1;
                        break;
                    }
                    ct++;
                }
                if(!f)
                cout << ct << '\n';
            }

        }
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
