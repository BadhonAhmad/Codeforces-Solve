#include <bits/stdc++.h>
using namespace std;
#define int long long

int nCr(int n,int r)
{
    int ans=1,i;
 
    for(i=1;i<=r;i++){
 
        ans*=n;
        ans/=i;
        n--;
    }
 
    return ans;
}
 
int32_t main()
{
	int n , m ,t;
    cin >> n >> m >> t;
    int i = 4,j,ans=0;
    while (i<=n)
    {
        j = t - i;
        if(j<1){
            break;
        }
        ans+= (nCr(n, i) * nCr(m, j));
        i++;
    }
    cout << ans;
    return 0;
}
