#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
//#define int long long
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
    ct = 1;
    while (tc--)
    {   
        string s1,s2,s;
        string s3;
        cin >> s1 >> s2;
        reverse(all(s1));
        reverse(all(s2));
        if(s1>s2){
            s += s1;
        }
        else
            s += s2;
        x = min(s1.size(), s2.size());
        y = max(s1.size(), s2.size());
        d = 0;
        for (i = 0; i < x; i++){
            a = (s1[i])-'0';
            b = (s2[i])-'0';
            c = (a + b + d) % 10;
            d = (a + b + d) / 10;
            s3 += c + '0';
        }
        if(x != y){
            for (; i < y; i++)
            {
                a = s[i] - '0';
                c = (a+d) % 10;
                d = (a+d) / 10;
                s3 += c + '0';
        }
        if(d>0){
                s3+=d + '0';
        }
        }
        reverse(all(s3));
        cout << "Case #" << ct++ << ": ";
        for(auto i:s3){
            cout << i;
        }
        nl;
    }
    return 0;
}

