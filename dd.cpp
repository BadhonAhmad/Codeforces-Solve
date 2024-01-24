#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=1e5+10;
using namespace std;

int main()
{
    fastio;
    int tc;
    ll cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    string s,s1,s2;
    cin >> tc;
    while (tc--)
    {  
        cin >> n;
        cin >> s;
        cnt = 0;
        if(n == 2){
            if(s[0] == '1' && s[1] == '1')
                cout << 1 << e;
        }
        else if(n == 3){
            if(s[0] == '1' && s[2] == '1'){//101,110
                cout << 2 << e;
            }
            else
                cout << 1 << e;
        }
        else if(n>3){
            for (i = 0; i < n; i++)
            {
                if(s[i] == '1'){
                    if(s[i+1] == '1'){
                        cout << 1 << e;
                        break;
                    }
                    else if(s[i+1] == '0' && s[i+2]=='0' && s[i+3]=='1'){
                        cout << 1 << e;
                        break;
                    }
                    else if (s[i + 1] == '0' && s[i+2] == '1')
                    {
                        cout << 2 << e;
                        break;
                    }
                    else{
                        for ( j = i+1; j < n; j++)
                        {
                            if(s[j] == '0'){
                                cnt++;
                                f = 1;
                                if(s[j+1] == '1'){
                                    cnt = 0;
                                    f = 0;
                                }
                            }
                            if(s[j] == '1'){
                                if(cnt%2 == 0){
                                    cout << 1 << e;
                                    break;
                                }
                                cnt++;
                                                        }
                        }
                        
                    }
                }

            }
        }
    }
    return 0;
}

