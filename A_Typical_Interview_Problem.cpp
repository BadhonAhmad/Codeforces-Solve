#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout << "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f ? "YES" : "NO") << "\n"
const int N = 2e5 + 10;
using namespace std;
/*Iterative C++ program to check
If a string is subsequence of another string*/

bool search(string pat, string txt)
{
    int M = pat.size();
    int N = txt.size();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            return true;
    }
    return false;
}
int32_t main()
{
    fastio;
    int ct, tc, sum, ans, t, x, y, z, i, j, k, a, b, c, d, n, m;
    cin >> tc;
    string s2 = "FBFFBFFBFBFFBFFBFBFFBFFB";
    while (tc--)
    {
        ans = 0, ct = 0, sum = 0;
        bool f;
        cin >> n;
        string s1;
        cin >> s1;
        f = search(s1, s2);
        if (f)
        {
            yes;
        }
        else
            no;
    }
    return 0;
}
