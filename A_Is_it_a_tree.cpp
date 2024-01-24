#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
bool isCycle(int src, vector<bool> &visited, vector<vector<int>> &adj,int parent){
    visited[src] = true;
    for(auto it:adj[src]){
        if(it != parent){
            if(visited[it]){
                return true;
            }
            if(!visited[it] and isCycle(it,visited,adj,src)){
                return true;
            }   
        }
    }
    return false;
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for (int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n+1, false);
    bool cycle = false;
    for (int i = 1; i <= n; i++){
        if(!visited[i] and isCycle(i,visited,adj,-1)){
            cycle = true;
            break;
        }
    }
    if(cycle)
        cout << "NO";
    else 
    cout << "YES";
    return 0;
}