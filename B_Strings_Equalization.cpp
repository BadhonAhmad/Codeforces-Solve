#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=2e5+10;
using namespace std;

int main()
{
    fastio;
    ll cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {
        string s,ss;
        cin >> s;
        cin >> ss;
        f = 0;
        if(s.size() != ss.size()){
            no;
            continue;
        }
        // f = 0;
        // for ( i = 0; i < s.size(); i++)
        // {
        //     if(s[i] != ss[i]){
        //         if(i == 0 && (s[i] == ss[i+1] || s[i+1] == ss[i]) ){
        //             continue;
        //         }
                
        //         if(i == s.size()-1 && (s[i] == ss[i-1] || s[i-1] == ss[i])){
        //             continue;
        //         }
        //         if(s[i] == ss[i+1] || s[i] == ss[i-1] || s[i+1] == ss[i] || s[i-1] == ss[i] || s[i] == ss[i+1]){
        //             continue;
        //         }
        //         else{
        //             f = 1;
        //             break;
        //         }
        //     }

        // }
        // if(!f)
        //     yes;
        // else
        //     no;
        if(s.size() == 1){
            if(s == ss){
                yes;
            }
            else
                no;
                continue;
        }
        for (size_t i = 0; i < s.size(); i++)
        {
            for (size_t j = 0; j < s.size( ); j++)
            {
                if(s[i] == ss[j]){
                    f = 1;
                    break;
                }
            }
            if(f) break;            
        }
        if(f)
            yes;
            else
            no;
    }
    return 0;
}

