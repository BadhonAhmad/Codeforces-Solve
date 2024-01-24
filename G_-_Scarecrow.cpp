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
#define cy cout << "Case " << i << ": Yes" << endl
#define cn cout << "Case " << i << ": No" << endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n,m;
    string s1,s2;
    vector<ll> v,vv;
    cin>>t;
    for(i=1; i<=t; i++){
        cin >> n;
        cin >> s1;
        cnt = 0;
        for (size_t i = 0; i < s1.size(); i++)
        {
            if(s1[i] == '.'){
                cnt++;
                i+=2;
            }
        }
        cout << "Case " << i << ": " << cnt << endl;
        }
    return 0;
}

