#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int i, n;
    cin >> n;
    for(i = 0; i < n; i++){
        string s; 
        cin >> s;
        stack<char> st;
        int j , x = s.size();
        int f = 0;
        for(j = 0; j < x; j++){
            
            if(s[j] == '[' || s[j] == '{' || s[j] == '('){
                st.push(s[j]);
            }
            else{
                if(st.size() == 0){
                    f=1;
                    break;
                }
                char ch = st.top();
                st.pop();
                if(s[j] == ']'){
                    if(ch != '['){
                        f=1;
                        break;

                    }
                }
                
                if(s[j] == '}'){
                    if(ch != '{'){
                        f=1;
                        break;
                    }
                }
                
                if(s[j] == ')'){
                    if(ch != '('){
                        f=1;
                        break;
                    }
                }
                
            }
        }
        if(st.size() > 0) f= 1;
        if(f) no;
        else
        yes;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

