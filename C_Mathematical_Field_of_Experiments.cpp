#include <bits/stdc++.h>
using namespace std;
#define N 10000000
long long num[N + 5];
int main()
{
    long long n;
    cin >> n;
    long long tmp = n / 2;
    for (long long i = 0; i < n; i++)
        num[i] = -1;
    for (long long i = 0; i <= tmp; i++)
    {
        long long m = (i * i) % n;
        if (m > N)
            continue;
        num[m] = i;
    }
    for (long long i = 0; i < n; i++)
    {
        if (i)
            cout << num[i] << " ";
        else
            cout << num[i] << " ";
    }
    cout << endl;
}