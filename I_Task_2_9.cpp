#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        int n , m , f = 0;
        cin >> n >> m;
        map <pair<int,int>, int> mp;
        for(int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            mp[{a,b}]++;
            if(mp[{a,b}] > 1) f = 1;
        }
        if(f) cout << "Scenario #" << i << ": impossible\n";
        else cout << "Scenario #" << i << ": possible\n";
    }
}