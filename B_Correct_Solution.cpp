#include <bits/stdc++.h>
using namespace std;

#define e               "\n"


void solve()
{
    string s,s2,sk,an="";
    cin >> s;
    cin>> s2;

    int l = s.size(), ct = 0;
    if(l !=s2.size()){
        cout << "WRONG_ANSWER";
        return;
    }
    for (int i = 0; i < l; i++){
        if(s[i] == '0'){
            ct++;
        }
        else{
            sk += s[i];
        }
    }
    if(ct == l){
        if(s2 == "0"){
            cout << "OK";
        }else{
            cout << "WRONG_ANSWER";
        }
        return;
    }
    sort(sk.begin(), sk.end());
    an+=sk[0];
    for (int i = 0; i < ct; i++){
        an+='0';
    }
    for (int i = 1; i < l; i++)
        an+= sk[i];
    
    int tk = stoi(an);
    int kt = stoi(s2);
    if(kt == tk){
        cout << "OK";
    }
    else
        cout << "WRONG_ANSWER";
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