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
    cin >> t >> x;
    
    pair<string, string> p;
    vector<pair<string, string>> vv;
    vector<string> v;
    vector<string> ans;
    for (size_t i = 0; i < x; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        p.first = s1;
        p.second = s2;
        vv.pb(p);
    }
    for (size_t i = 0; i < t; i++)
    {
        string ss;
        cin >> ss;
        v.pb(ss);
    }
    // for (auto it : vv)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    
    for (j = 0; j < v.size(); j++)
    {
        for (auto it:vv)
        {
            if(v[j] == it.first){
                //cout << "hi" << endl;
                if(it.first.size() <= it.second.size()){
                    ans.pb(it.first);
                    break;
                }
                else {
                    //cout << "hi pb" << endl;
                    ans.pb(it.second);
                    break;
                }
            }   
            else if(v[j] == it.second){
                if(it.second.size() <= v[j].size()){
                    ans.pb(it.second);
                    break;
                }
                else{
                    ans.pb(it.first);
                    break;
                }
            }

        }
        
    }
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    
  
    return 0;
}

