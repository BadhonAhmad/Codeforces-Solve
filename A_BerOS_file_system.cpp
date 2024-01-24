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
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i] == '/' and s.size() ==1 ){
            cout << '/';
            break;
        }
        if(s[i] == '/'){
            while (s[i] == '/')
            {
                i++;
                /* code */
            }
            if( i == s.size()){ 
                if(!f)
                    cout << "/";
                break;
            }
            cout << "/";
            i--;
        }
        else{ 
            cout << s[i];
            f = 1;
        }
    }
    
    return 0;
}

