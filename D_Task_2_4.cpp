#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(c < a && c < b){
        cout << "No";
        return 0;
    }
    while (1)
    {
        if(c % a == 0 || c % b == 0){
            cout <<"Yes";
            return 0;
        }
        c -= a;
        if(c < 0) break;
        if(c % a == 0 || c % b == 0){
            cout <<"Yes";
            return 0;
        }
        if(c < 0) break;
    }
    cout << "No";
    
}