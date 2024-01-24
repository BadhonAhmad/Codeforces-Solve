#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const long long N=1000003;
using namespace std;

int main()
{
    fastio;
 long long cnt = 0,tc, f = 0, sum = 0,  t,x, y, z, i, j, k, a, b, c, n, m;
    string s;
    cin >> s;
    string ans;
    /*
    ">"  →  1000,
    "<"  →  1001,
    "+"  →  1010,
    "-"  →  "1011",
    "."  →  1100,
    ","  →  1101,
    "["  →  1110,
    "]"  →  1111.
    */
    for (i = 0; i < s.size(); i++)
    {
        if(s[i] == '>'){
            ans+="1000";
        }
        else if(s[i] == '<'){
            ans += "1001";
        }
        else if(s[i] == '+'){
            ans +=  "1010";
        }
        else if(s[i] == '-'){
            ans +=  "1011";
        }
        else if(s[i] == '.'){
            ans +="1100";
        }
        else if(s[i] == ','){
            ans += "1101";
        }
        else if(s[i] == '[')
            ans += "1110";
            else
            ans += "1111";
    }
    //cout << ans << e;
    reverse(all(ans));
    y = 1;
    for ( i = 0; i < ans.size(); i++)
    {
        x= ((ans[i] - 48));
        sum = (sum + (y * x) % N) % N;
        y = (y * 2) % N;
    }
    cout << (sum%N) << e;

    return 0;
}

