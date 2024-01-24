#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
vector<int>adj[100000];
vector<int>k;
void topolgicalsort(int n){
    queue<int>q;
    for(int i = 1; i <= n; ++i) {
            if(m[i] == 0) q.push(i);
    }
        while(!q.empty()) {
           int u = q.front(); q.pop();
            k.push_back(u);

            for(int child:adj[u]) {
                m[child]--;
                if(m[child] == 0) q.push(child);
            }
        }
}
int main()
{
    int p,n;
    // while(cin>>n>>p){
    //     if(!p&&!n) return 0;
    cin >> n >> p;
    m.clear();
    int u, v;
    while (p--)
    {
            cin >> u >> v;
            adj[u].push_back(v);
            m[v]++;
        }
        topolgicalsort(n);
         for(int i = 0; i < n; ++i) {
            cout << k[i]<<" ";
        }
        cout << '\n';
        k.clear();
        m.clear();
        for(int i=0;i < 1000;i++) 
        adj[i].clear();
    //}
    return 0;

}