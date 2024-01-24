#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;
        string s1,s2;
        cin >> s1 >> s2;
        if(s1[0] == s2[0]){
          yes;
          cout << s1[0]<< "*" , nl;
          continue;
        }
        if(s1.back() == s2.back()){
          yes;
          cout <<"*"<<s1.back() << "\n";
          continue;
        }
        for (i = 0; i + 1 < s1.size(); i++){
          for (j = 0; j + 1 < s2.size(); j++){
            if(s1[i] == s2[j] && s1[i+1] == s2[j+1]){
              yes;
              cout << "*" <<s1[i]<< s1[i + 1]<< "*\n";
              f = 1;
              break;
            } 
          }
          if(f) break;
        }
        if(!f) no;
    }
    return 0;
}

