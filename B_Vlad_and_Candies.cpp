#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n; 
    cin >> n;
    vector<int > v(n);
    // set<int> st;
    for(int i = 0 ;i < n; i++){
        cin >> v[i];
    }// 3 2 3 2 3 4 3 4 3 4 3 4 1
    sort(all(v));
    int f = 0;
    if(n == 1 ){
        if(v[0] == 1) yes;
        else no;
        return;
    }
    if(v[n-1] -v[n-2] > 1) f=1;
    
    if(f) no;
    else yes;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}