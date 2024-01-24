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
#define cy cout << "Case " << i << ": Yes" << endl
#define cn cout << "Case " << i << ": No" << endl
using namespace std;

signed main()
{
    fastio;
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t;
    for(j=1; j<=t; j++){
        string s1, s2;
        vector<char> v;
        getline(cin >> ws, s1);
        getline(cin >> ws, s2);
        for (size_t i = 0; i < s1.size(); i++)
        {
            if(s1[i]>='A' && s1[i]<='Z'){
                s1[i] = s1[i] + 32;
            }
            if(s2[i]>= 'A' && s2[i]<='Z'){
                s2[i] = s2[i] + 32;
            }
        }

        s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
        s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1 == s2){
            cy;
        }
        else
            cn;
    }
}

