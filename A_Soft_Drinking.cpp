#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int x, y, z,n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    l = k * l;
    x = l / n;
    y = c * d;
    z = p / np;
    int ans = min(x, min(y, z));
   // cout << x << " " << y << " " << z << endl;
    cout << ans / n;

    return 0;
}