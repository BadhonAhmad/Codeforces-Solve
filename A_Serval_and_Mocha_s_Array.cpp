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
int dgtsum(int n){
    int sum = 0;
    while (n)
    {    
    sum += n % 10;
    n /= 10;
    }
    return sum;
}
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    ct = 1;
    a = 19;
    while (1)
    {
    if(dgtsum(a)  == 10 && ct == tc){
        cout << a;
        break;
    }
    if(dgtsum(a) == 10){
        ct++;
    }
    a++;
    }
    
    return 0;
}

