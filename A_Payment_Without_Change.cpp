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

multiset<int> lft, rgt;
void add(int v){
    if(v>*(--lft.end())){
        rgt.insert(v);
    }
    else{
        lft.insert(v);
    }
}
void rem(int v){
    if(lft.find(v) != lft.end()){
        lft.erase(lft.find(v));
    }
    else{
        rgt.erase(rgt.find(v));
    }
}
void adjust(int k){
    int l = (k + 1) / 2;
    int r = k - l;
    while (lft.size()>l)
    {
        rgt.insert(*(--lft.end()));
        lft.erase(--lft.end());
    }
    while (rgt.size()>r)
    {
        lft.insert(*rgt.begin());
        rgt.erase(rgt.begin());
    }
    
}
void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    cin>>n >> k;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin>>v[i]; 
    }
    for (i = 0; i < k; i++){
        lft.insert(v[i]);
    }
    adjust(k);
    cout << *(--lft.end()) << ' ';
    for (i = k; i < n; i++){
        add(v[i]);
        rem(v[i - k]);
        adjust(k);
        cout << *(--lft.end()) << ' ';
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