#include <bits/stdc++.h>
using namespace std;
int stringToInt(string str)
{
    int result = 0;
    int i = 0;

    while (i < str.length())
    {
        if (isdigit(str[i]))
        {
            result = result * 10 + (str[i] - '0');
            ++i;
        }
    }
    return result;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char a = s[n - 1], b = s[n - 2], c = s[n - 3];
    int sk = 0;
    sk += a - '0';
    if (n > 1)
    {
        if (b == '0')
            sk += 10;
        else
            sk += (b - '0') * 10;
    }
    if (n > 2)
    {
        if (c == '0')
        {
            sk += 100;
        }
        else
            sk += (c - '0') * 100;
    }
    if (sk % 8 == 0)
    {
        for (int i = 0; i < n - 3; i++)
            cout << s[i];
        cout << sk << endl;
    }
    else
    {
        int jk = sk;
        sk /= 10;
        for (int i = 1; i <= 9; i++)
        {
            sk += i;
            if (sk % 8 == 0)
            {
                for (int i = 0; i < n - 3; i++)
                    cout << s[i];
                cout << sk << endl;
                return;
            }
            else
            {
                sk /= 10;
            }
        }
        sk = jk;
        int cc = sk % 10;
        sk /= 10;
        for (int i = 1; i <= 9; i++)
        {
            sk += (i * 10) + cc;
            if (sk % 8 == 0)
            {
                for (int i = 0; i < n - 3; i++)
                    cout << s[i];
                cout << sk << endl;
                return;
            }
            else
            {
                sk /= 10;
            }
        }
        sk=jk;
        int dd=sk%10;
        sk/=10;
        int ee=sk%10;
        int tm=0;
        for(int i=1; i<=9; i++){
            tm+=(i*100)+ee*10+dd;
            if(tm % 8 == 0){
                for (int i = 0; i < n - 3; i++)
                    cout << s[i];
                cout << tm << endl;
                return;
            }
            else{
                tm=0;
            }
        }
        sk=jk;
        while (sk % 8 != 0)
        {
            sk++;
        }

        for (int i = 0; i < n - 3; i++)
            cout << s[i];
        cout << sk << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
