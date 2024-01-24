#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll               long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes               cout<<"YES"<<endl
#define cy                cout << "Case " << i << ": yes" << endl
#define cn                cout << "Case " << i << ": no" << endl
#define no                cout<<"NO"<<endl
using namespace std;

int solve(){
    int cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n,m;
    string s1,s2;
    char ch;
    vector<int> v,vv;
    set<int> s;
    cin >> x;
    for ( i = 0; i < x; i++)
    {
        cin >> y;
        s.insert(y);
        v.pb(y);
    }
    sort(v.begin(), v.end());
    if(v[x-1] == x-1 && s.size() == x){
        return 1; 
    }
    else
        return 0;
}

int main()
{
  fastio;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){ 
    int ans=solve();
    if(ans)
        cy;
        else
            cn;
    }
    return 0;
}