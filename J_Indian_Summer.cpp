#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t , ans = 0;
    cin >> t;
    map <pair<string, string>,int> mp;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if(mp[{a,b}] == 0){
            ans ++;
        }
        mp[{a,b}]++;
    }
    cout << ans;
}