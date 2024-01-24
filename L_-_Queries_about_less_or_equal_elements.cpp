#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    ll cnt=0,f=0,sum=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t>>x;
    vector<ll> v1, v2;
    vector<ll> ans;
    for ( i = 0; i < t; i++)
    {
        cin >> y;
        v1.pb(y);
    }
    for (i = 0; i < x; i++)
    {
        cin >> z;
        v2.pb(z);
    }
    sort(v1.begin(), v1.end());
    for ( i = 0; i < v2.size(); i++)
    {
        n = v2[i];
        ll lo = 0;
        ll hi = t - 1;
        
        while (lo <= hi)
        {
            f = 0;
            ll mid = (lo + hi) / 2;
            if(v1[mid] == n){

                sum=(mid + 2);
                if(sum>t)
                    ans.pb(t);
                else
                    ans.pb(sum);
                f = 1;
                break;
            }
            if(v1[mid] > n){
                hi = mid - 1;
            }
            else if(v1[mid] < n){
                lo = mid + 1;
            }
          //  cout << lo << "lo hi" << hi << endl;
        }
        if (!f){
            ans.pb(hi+1);
        }
    }
    
    for ( i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
 
    return 0;
}

