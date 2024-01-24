#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int constr_11(int x){
    string s;
    for (int i = 0; i < x; i++){
        s += '1';
    }
    return stoi(s);
}
int constr_10(int z){
    string s = "1";
    for (size_t i = 0; i < z-1; i++)
    {
        s += '0';
    }
    return stoi(s);
}
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;
    while (tc--)
    {
        cin >> n;
        f = 0;
        for ( i = 0; i < 20; i++)
        {
            if(n<0)break;
            if(n%11  == 0){
                f = 1;break;
            }
            
            n -= 111;
        }
        f ? yes : no;
    }
    return 0;
}

