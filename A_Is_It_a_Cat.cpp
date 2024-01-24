#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n;
        string s,s2,s3;
        a = 0, b = 0, c = 0, d = 0;
        cin >> s;
        if(n<=3){
            no;
            continue;
        }
        for(i = 0; i < n; i++){
            if(s[i] == 'm' || s[i] == 'M'){
                a = 1;
                if(b || c || d){
                   
                    f = 1;
                    break;
                }
            }
            if(s[i] == 'e' || s[i] == 'E'){
                b = 1;
                if(c || d){
                    
                    f = 1;
                    break;
                }
            }
            if(s[i] == 'o' || s[i] == 'O'){
                c = 1;
                if(d){
                    
                    f = 1;
                    break;
                }
            }
            if(s[i] == 'w' || s[i] == 'W'){
                d = 1;
            }
            if(s[i] != 'm' && s[i] != 'M' && s[i] != 'o' && s[i]!='O' && s[i]!='e' && s[i]!='E' && s[i]!='w' && s[i]!='W'){
            
                f = 1;
                break;
            }
        }
        if(!f && a &&b &&c&&d){
            yes;
        }
        else
            no;
    }
    return 0;
}

