#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m; 
    cin >> n >> m;
    string s, t;
    map <string, string> mp1;
    
    for(int i = 0; i < n; i++){
        cin >> s >> t;
        mp1[t]=s;
    }
    
    for(int i = 0 ; i < m; i++){
        cin >> s >> t;
        string tt = t.substr(0,t.size()-1);
        cout << s << " " << t << " #" << mp1[tt] << '\n'; 
    }
    // for(auto it : mp1 ){
    //     cout << it.first << ' ' 
    // }
}