#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
    int n;
    cin >> n;
    int a;
    queue<int> q;
    for (int i = 0; i < n; i++){
        cin >> a;
        q.push(a);
    }
    cout << q.front();
}