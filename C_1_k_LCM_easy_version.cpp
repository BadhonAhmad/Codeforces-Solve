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
    string s1,s2,s3;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n >> m; 
        if(n == 4){
            cout << 1 << " " << 1 << " " << 2, nl;
            continue;
        }
        if(n%3 == 0){
            cout << n / 3 << " " << n / 3 << " " << n / 3, nl;
            continue;
        }
        if(n%2){
            z = n / 2;
            cout << z << " " << z << " " << 1, nl;
        }
        else{
            z = n / 2;
            if(z%2 == 0)
                cout << z << " " << z - (z / 2) << " " << z - (z / 2), nl;
            else
                cout << (n - 2) / 2 << " " << (n - 2) / 2 << " " << 2, nl;
        }
    }
    return 0;
}

