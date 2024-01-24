#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define N 1000006
int ceil_div(int a, int b)
{
    return a % b == 0 ? a / b : a / b + 1;
}

void solve()
{
    int n;
    cin >> n;
    int ct = 0, alic = 0,aw=0,ab= 0,bw = 0,bl = 0, bb = 0;
    int i = 1, f = 0;
    int k = n;
    while (n)
    {
        
        if (ct == 0)
        {
            alic += i;
            aw++;
            k--;
            n -= i;
            i++;
        }
        else
        {
            if (!f)
            {
                if (i >= n)
                {
                    if(n > 0)
                    bb += n,bw+=ceil_div(n,2),bl+=n/2;
                    break;
                }
                else
                {
                    bb += i;
                    bw += ceil_div(i,2);
                    bl+= i/2;
                    n -= i;
                    i++;
                   
                    if (i >= n)
                    {
                        if(n > 0)
                        bb += n,bl+=n/2,bw += ceil_div(n,2);
                        break;
                    }
                    else{
                        bb+=i;
                        bw += ceil_div(i,2);
                        bl += i/2;
                        n-=i;
                         
                    }
                    i++;
                }
                f=1;
            }
            else{
                if (i >= n)
                {
                    if(n > 0)
                    alic += n,aw += ceil_div(n,2), ab += n/2;
                    break;
                }
                else
                {
                    alic += i;
                    
                    aw += ceil_div(i,2),ab += i/2;
                    n -= i;
                    i++;
                    if (i >= n)
                    {
                        if(n > 0)
                        alic += n,aw += ceil_div(n,2), ab+= n/2;
                        break;
                    }
                    else{
                        alic+=i;
                        aw += ceil_div(i,2),ab += i/2;
                        n-=i;
                    }
                    i++;
                }
                f=0;
            }

        }
        ct++;   
    }
    cout << aw <<' ' << ab <<' '<< bl <<' '<< bw << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
