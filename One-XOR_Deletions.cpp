#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        /* code */
  
    
    int n;cin>>n;
    map<int,int> m;
    int x;
    int keep=INT_MIN;
    for(int i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }
    int tot=0;
    for(auto it : m){
        int tot = it.second;
        if(it.first%2 == 0 && m.find(it.first+1) != m.end())
        {
            tot += m[it.first + 1];
        }
        keep = max(tot, keep);
    }
    cout << n - keep<< endl;  }
}