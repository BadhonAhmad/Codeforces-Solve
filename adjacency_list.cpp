#include<iostream>
#include<vector>
#include<cmath>
#define SZ 1000
using namespace std;
int main()
{
    int n,m,x,y,z,i,j;
    string ss="my name is badhon";
    cout<<ss<<endl;

    cin>>n>>m;
    vector<int> adj[SZ],cost[SZ];
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y>>z;
        adj[x].push_back(y);
        cost[x].push_back(z);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<i<<":";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout<<adj[i][j]<<",\n"[j==adj[i].size()-1];
        }
        if(adj[i].size()  ==  0) cout<<endl; 
    }
    return 0;
}