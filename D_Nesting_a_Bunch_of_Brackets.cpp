#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    char s[3010];
    
    while (gets(s))
    {
        int ct = 0;
        
        stack<char>st;
        
        int i,n = strlen(s);
        if(n == 0){
            yes;
            continue;
        }

        for( i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<' ||(s[i] == '*' && s[i-1] == '(')){
                st.push(s[i]);
                if(s[i] != '*') ct++;
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']' || s[i] == '>' ||(s[i] == '*' && s[i+1] == ')')){
                if(s[i] == '*' && st.empty()){
                    ct++;
                    break;
                }
                else if((s[i] == ')' || s[i] == '}' || s[i] == ']' || s[i] == '>') && st.empty()){
                    ct++;
                    break;
                }
                else if(st.top() == '*' && s[i] == '*'){
                    st.pop();
                    st.pop();
                    i++;
                    ct++;
                }
                else if(!st.empty() && ((s[i] == ')' && st.top() == '(')||(s[i] == '}' && st.top() == '{')||(s[i] == ']' && st.top() == '[')||(s[i] == '<' && st.top() == '>'))){
                    st.pop();
                    ct++;
                }
                else{
                    ct++;
                    break;
                }
            }
            else{
                ct++;
            }
        }
        if(st.empty() && n == i){
            cout << "YES" << endl;
        }
        else if(!st.empty() && n == i){
            cout << "NO " << ct + 1 << endl;
        }
        else cout << "NO " << ct << endl;
    }

    
}

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int t = 1;
  //  cin >> t;

    while(t--)
        solve();

    return 0;
}

