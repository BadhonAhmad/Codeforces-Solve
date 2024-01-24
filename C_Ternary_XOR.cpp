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
        string s;
        cin >> s;
        vector< char > an1, an2;
        for(int i = 0; i < n; i++){
            if(s[i] == '2' && i != 0){
                an1.push_back('0');
                an2.push_back('2');
            }
            else if(s[i] == '2'){
                an1.push_back('1');
                an2.push_back('1');
            }
            else if(s[i] == '1'){
                an1.push_back('0');
                an2.push_back('1');
            }
            else{
                an1.push_back('0');
                an2.push_back('0');
            }
        }
        for(auto it : an1) cout << it;
        cout << "\n";
        for(auto it : an2) cout << it;
        cout << "\n";
    }
}