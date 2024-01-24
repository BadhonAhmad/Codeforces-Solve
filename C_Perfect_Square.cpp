#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> s[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int k = i; k < n; k++){
                for(int j = k; j < n; j++){
                    if(s[k][j] > s[k+n-j][j])
                        ans += stoi(s[k][j]) - stoi(s[k + n - j][j]); 
                }
            }
        }
        cout << ans << endl;

        
    }
}