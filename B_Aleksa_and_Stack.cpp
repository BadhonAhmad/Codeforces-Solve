#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        ar[0]=2;
        ar[1]=3;
        cout<< 2 << ' ' << 3 <<' ';
        int now=5;
        for(int i = 2; i<n; i++){
            int j=now;
            now=ar[i-1]+1;
            while ((now*3) % j == 0)
            {
                now++;
            }
            cout<< now <<' ';
            ar[i]=now;
            now=ar[i]+ar[i-1];
        }
        cout<<endl;
    }
}