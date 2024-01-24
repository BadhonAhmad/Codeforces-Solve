#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define mod 998244353
#define N 1000006

void solve(){
    int ar[9][9],f=0;
    set<int> nine;
    for(int i = 0; i< 9; i++){
        set<int>tm;
        for(int j = 0; j < 9; j++){
            cin >> ar[i][j];
            tm.insert(ar[i][j]);
        }
        if(tm.size() != 9){
            f=1;
        }
    }
    if(f){
        no;
    }
    else{
        for(int j = 0; j < 9; j++){
            set<int>stt;
            for(int i = 0; i < 9; i++){
                stt.insert(ar[i][j]);
            }
            if(stt.size() != 9){
                f=1;
            }
            if(f){
                no;
                return;
            }
        }
        for(int i = 0; i < 7; i+=3){
            for(int j = 0; j < 7; j+=3){
                set<int> st;
                for(int k = i; k < i+3; k++){
                    for(int l = j; l < j+3; l++){
                        st.insert(ar[k][l]);
                    }
                }
                if(st.size() != 9){
                    no;
                    return;
                }
            }
        }
        yes;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
   // cin >> t;
    while(t--)
        solve();

    return 0;
}

