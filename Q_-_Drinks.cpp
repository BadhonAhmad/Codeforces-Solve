#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t>>x;
    vector<string> v[t];
    for ( i = 0; i < t; i++)
    {
        string s;
        scanf("%s",s);
        v[i].push_back(s);
    }
    for ( i = 0; i < t; i++)
    {
        cout<<v[i]<<endl;
    } 
    return 0;
}

