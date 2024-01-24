#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '-'){
            ans--;
            
        }
        else ans++;
    }
    cout<<ans<<endl;
    return 0;
}