#include <bits/stdc++.h>
using namespace std;
#define int long long 
int gcd(int a, int b){
    while (b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

//to avoid overflow efficient lcm
int lcm(int a,int b){
    return (a/gcd(a,b))*b;//2000000000000000000->2e18
}
int32_t main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        int a, b; 
        cin >> a >> b;
        int x = gcd(a,b);
        int y = lcm(a,b);
        if(x + y == a + b) cout << "true\n";
        else cout << "false\n";
    }
}