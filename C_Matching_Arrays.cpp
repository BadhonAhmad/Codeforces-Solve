#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
bool cmp(pair<int,int> a, pair<int,int> b) {return a > b;}///boro theke choto prothom element
bool cmp2(pair<int,int>a, pair<int,int> b){ return a.second < b.second; }// choto theke boro 2nd element

void solve(){
    int n, i, x;
    cin >> n >> x;

    vector<pair<int,int>>a(n),b(n);
    for(i = 0; i < n; i++){
        cin >> a[i].first;
        
        a[i].second = i;
    }
    for(i = 0; i < n; i++){
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(),a.end(),cmp);
    sort(a.begin()+x,a.end());
    sort(b.begin(),b.end());
    sort(b.begin(),b.begin()+x,cmp);
    int ct = 0;
    for(i = 0; i < n; i++){
        if(a[i].first > b[i].first) ct++;
    }
    if(ct != x){
        no;
        return;
    }
    yes;
    for(i = 0; i < n; i++){
        a[i].first = b[i].first;
    }
    sort(a.begin(),a.end(),cmp2);
    for(i= 0; i < n; i++){
        cout << a[i].first << ' ';
    }
    cout << endl;


    
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

