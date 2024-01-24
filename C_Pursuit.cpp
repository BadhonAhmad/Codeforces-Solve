#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n;
    cin >> n;
    int sm1 = 0,j,sm2 = 0;
    vector<int> il(n+1), im(n+1), cum1(n+1), cum2(n+1);
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        im[i] = x;
    }
    
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        il[i] = x;
    }
    
    
    sort(allr(im));
    sort(allr(il));
    // for(auto it:im){
    //     cout << it << ' ';
    // }
    // cout << endl;

    for(int  i = 1; i <= n; i++){
        cum1[i] = cum1[i-1] + im[i-1];
        cum2[i] = cum2[i-1] + il[i-1];
    }

    // for(auto it : cum1 ){
    //     cout << it << ' ';
    // }
    // cout << endl;
    int lo = 0, hi = 1e7;
    while (lo < hi)
    {
        int mid = (lo + hi ) / 2;//total stages
        int ans = (n + mid) - (n + mid) / 4;//extra statges
        int amr , ilar;
        if(ans <= mid)
            amr = ans * 100;
        else amr = mid * 100 + cum1[ans - mid];//100 + aager elements
        /* code */
        ilar = cum2[min(n,ans)];

        if(amr >= ilar){
            hi = mid;
        }
        else lo = mid + 1;
        
    }
    cout << lo << endl;
    
    

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

