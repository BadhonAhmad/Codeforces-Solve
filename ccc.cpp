#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p;
    string s;
    int n, x, test;
    cin >> test;
    while (test--)
    {
        int ans = 2;
        cin >> n;
        cin >> s;
        vector<int> index;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                index.push_back(i + 1);
        }
        for (int i = 0; i < index.size() - 1; i++)
        {
            if (abs(index[index.size() - 1] - index[i]) % 2 == 1)
            {
                ans = 1;
                break;
            }
        }

        cout << ans << endl;
    }
}