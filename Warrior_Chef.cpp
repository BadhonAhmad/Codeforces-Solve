#include<bits/stdc++.h>
using namespace std;
#define int long long int 

bool f(int mid , vector<int>&v , int h)
{
    for(int i = 0 ; i < v.size() ; i ++){
        if(mid >= v[i]) continue;
        if(h > v[i]) h -= v[i];
        else return false;
    }

    return true;
}
int32_t main()
{
    int t;
    cin >> t;
    while(t --){
        int n , h;
        cin >> n >> h;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i ++) cin >> v[i];
        int ans = 0;
        int lo = 0 , hi = 1e9;
        while (lo <= hi){
            int mid = (lo + hi) / 2;
            if(f(mid , v , h)){
                ans = mid;
                hi = mid - 1;
            }

            else lo = mid + 1;
        }
        
        cout<<ans<<"\n";
    }
}