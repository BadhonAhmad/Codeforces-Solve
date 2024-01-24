#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int i, f = 0;
    while (getline(cin, s))
    {
        string s1, s2;
        vector<string> v;
       
        for (i = 0; i < s.size(); i++)
        {
           if(s[i] == '['){
               f = 1;
           }
           else if(s[i] == ']'){
               f = 0;
               v.push_back(s1);
               s1.erase();
           }
           else{
               if(f){
                   s1 += s[i];
               }
               else {
                   s2 += s[i];
               }
           }
        }
        while (!v.empty())
        {
           cout << v.back();
           v.pop_back();
        }
        cout << s2 << endl;
        
    }

    return 0;
}