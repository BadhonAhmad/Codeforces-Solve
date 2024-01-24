#include <bits/stdc++.h>
using namespace std;

#define e               "\n"


void solve()
{
    string s1, s2, s3;
    set<int> st1, st2, st3;
    cin >> s1 >> s2 >> s3;
    int a = s1.size(), b = s2.size(), c = s3.size();
    int x, y, z;
    x = y = z = 0;
    if(s1[0] == s2[0] && s2[0] == s3[0] && s1[0] != '.' && s2[0] != '.'){
        cout << s1[0] << e;
        return;
    }
    if(s1[1] == s2[1] && s2[1] == s3[1] && s1[1] != '.' && s2[1] != '.'){
        cout << s1[1] << e;
        return;
    }
    if(s1[2] == s2[2] && s2[2] == s3[2]&& s1[2] != '.' && s2[2] != '.'){
        cout << s1[2] << e;
        return;
    }
    
    if(s1[0] == s2[1] && s2[1] == s3[2] && s1[0] != '.' && s2[1] != '.'){
        cout << s1[0] << e;
        return;
    }

    if(s1[2] == s2[1] && s2[1] == s3[0] && s1[2] != '.' && s2[1] != '.'){
        cout << s1[2] << e;
        return;
    }

    if(s1[0] == s1[1] && s1[1] == s1[2] && s1[0] != '.'){
        cout << s1[0] << e;
        return;
    }
    
    if(s2[0] == s2[1] && s2[1] == s2[2] && s2[0] != '.'){
        cout << s2[0] << e;
        return;
    }
    
    if(s3[0] == s3[1] && s3[1] == s3[2] && s3[0] != '.'){
        cout << s3[0] << e;
        return;
    }
    else {
        cout << "DRAW\n";
    }
    
    
        return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}