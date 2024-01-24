#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    vector<int> v;
    while ((scanf("%lld",&a)) != EOF)
    {
        v.push_back(a);
        sort(v.begin(), v.end());
        int x = v.size();
        if(x%2){
            cout << v[x / 2] << endl;
        }
        else{
            cout << (v[(x / 2) - 1] + v[x / 2]) / 2 << endl;
        }
    }

    return 0;
}