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
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n,m;
    cin>>n>>m;
    if(n<m) {
        cout << -1 << e;
        return 0;
    }
    else{
        if(n%2 == 0){
            cnt = n / 2;
        }
        else{
            cnt = n / 2 + 1;
        }
        while (cnt%m != 0)
        {
            /* code */
            cnt++;
        }
    }
    cout << cnt << e;
    return 0;
}

