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
        int f=0;
        for(int i = 1; i <= 20; i++){
            for(int j = 1; j < i; j++){
                int c=n-i-j;
                if(c < 1) continue;
                if(c == i) continue;
                if(c == j) continue;
                if(i%3 == 0) continue;
                if(j%3 == 0) continue;
                if(c % 3 == 0) continue;
                cout << "YES\n";
                cout << i << ' '<< j<<' '<< c <<'\n';
                f = 1;
                break;
            }
            if( f ) break;
        }
        if(f) continue;
        cout << "NO\n";
        
    }
}