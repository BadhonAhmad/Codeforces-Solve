#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int get(int x){
    int ans=0,i=0;
    while(x){
        ans+=x%10;
        x/=10;
        i++;
    }
    return ans;
}
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;
    while (tc--)
    {  

        cin >> n;
        f = 0;
        if(n%2 == 0){
            cout << n / 2 << " " << n / 2 << e;
        }
        else{
            x = (n / 2) ;
            y = n - x;
            if(((n/2)+1)%10 == 0){
                
                while (x)
                {
                    if(abs(get(x)-get(y))>1){
                        x-=4, y+=4;
                    }
                    else{
                        f = 1;
                        break;
                    }
                }
                if(f){
                    cout << x << " " << y << e;
                }
            }
            else
                cout << n / 2 << " " << (n / 2) + 1 << e;
            
        }
    }
    return 0;
}

