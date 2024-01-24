#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
// "Danil", "Olya", "Slava", "Ann" and "Nikita

void solve()
{
    string s;
    cin >> s;
   // cout << s << endl;
    map<string, int> mp;
    string j1 = "Ann",j2="Olya",j3="Slava",j4="Danil",j5="Nikita";
    if(s.size()<3){
        cout << "NO";
       // cout << "HI";
    }else{
        for (int i = 0; i < s.size() ; i++){
            string s1="";
            s1 += s[i];
            s1 += s[i + 1];
            s1+=s[i + 2];
            if(s1 == j1){
                //cout << s1 << endl;
                mp[s1]++;
                continue;
            }
            s1 += s[i + 3];
            if(s1==j2){
                mp[s1]++;
                continue;
            }
            s1 += s[i + 4];
            if(s1 == j3 || s1 == j4){
                mp[s1]++;
                continue;
            }
            s1 += s[i + 5];
            if(s1 == j5){
                mp[s1]++;
            }
        }
        int ct = 0;
        for(auto it:mp){
           // cout << it.first << endl;
            if(it.second >=2){
                cout << "NO";
                return;
            }
            else {
                ct++;
            }
        }
        if(ct>1 || ct == 0){
            cout << "NO";
                return;
        }
        cout << "YES";
    }

    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}