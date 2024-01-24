#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t="";
    cin >> s;
    int sm = 0, bg = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] >='a' && s[i]<='z')
            sm++;
        else
            bg++;
    }
        if (s[0] >= 'a' && s[0] <= 'z' && bg==(s.size()-1)){
        t += toupper(s[0]);
        for (int i = 1; i < s.size();i++){
            t += tolower(s[i]);
        }
        }
        else if(bg == s.size()){
        for (int i = 0; i < s.size(); i++){
            t += tolower(s[i]);
        }
        }
        else
        t = s;
        cout << t;
    return 0;
}