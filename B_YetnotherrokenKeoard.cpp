#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
bool cmp(pair<int,int> a, pair<int,int> b) {return a > b;}///boro theke choto prothom element
bool cmp2(pair<int,int>a, pair<int,int> b){ return a.second < b.second; }// choto theke boro 2nd element
void solve(){
    string s;
    cin >> s;
    stack<pair<char,int>> up,lo;
    vector<pair<char,int>>vp;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'B'){
            if(up.size() > 0) up.pop();
            continue;
        }
        if(s[i] == 'b'){
            if(lo.size() > 0) lo.pop();
            continue;
        }
        if(s[i] >='A' && s[i] <= 'Z') up.push({s[i],i});
        else lo.push({s[i],i});
    }
    while (up.size()>0)
    {
        vp.push_back(up.top());
        up.pop();
    }
    while (lo.size()>0)
    {
        vp.push_back(lo.top());
        lo.pop();
    }
    sort(vp.begin(),vp.end(),cmp2);
    for(auto i : vp){
        cout << i.first ;
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

