#include <bits/stdc++.h>
using namespace std;

#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    string s; 
    cin >> s;
    int ct = 0;
    vector<int> blue, red;

    map <int, int> mpb,mpr;
    for(i = 0; i < n; i++){
        if(s[i] == 'B'){
            blue.push_back(v[i]);
            mpb[v[i]]++;
        }
        else{
            red.push_back(v[i]);
            mpr[v[i]]++;
        }
    }
    sort(blue.begin(),blue.end());
    sort(red.begin(),red.end());

    int j = 1;
    for(i = 0; i < blue.size(); i++){
        if(blue[i] >= j  && mpb[blue[i]] > 0){
            if(blue[i] == j){
                mpb[blue[i]] = -1;
            }
            else{
                mpb[blue[i]]--;
            }
            j++;
        }
    }
    for(i = 0; i < red.size(); i++){
        if(mpr[red[i]] > 0 && red[i] <= j){
            mpr[red[i]]--;
            j++;
        }
    }
    if(j == n+1){
        yes;
    }
    else no;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

