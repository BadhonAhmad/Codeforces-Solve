#include<bits/stdc++.h>
using namespace std;
long long factorial[20];
int main()
{
    long long  l = 1;
    factorial[0] = 1;
    for (size_t i = 1; i <= 20; i++)
    {
        factorial[i] = i * l;
        l = factorial[i];
    }
    long long t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long int n;
        cin >> n;
        vector<int> v;
        for (int j = 20; j >= 0; j--)
        {
            if(factorial[j]<= n){
                n -= factorial[j];
                v.push_back(j);
            }
        }
        cout << "Case " << i << ": ";
        if(n == 0){ 

        for (int k = v.size()-1; k > 0 ; k--)
        {
            if(v[k] == 1 && i == 2){
                cout << "0!+";
            }
            else cout << v[k] << "!+";
        }
        cout <<v[0]<<"!\n";
        }
        else{
            cout << "impossible" << "\n";
        }
        v.clear();
    }
    
}