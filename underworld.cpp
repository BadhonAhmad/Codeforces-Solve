#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main ()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        int t,u,v,vis[20010],node[20010];
        memset(vis,0,sizeof(vis));
        memset(node,0,sizeof(node));
        vector<int>adj[20010];
        vector<int>v1;
        cin>>t;
        while(t--){
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
          v1.push_back(u);
          v1.push_back(v);
        }
        sort(v1.begin(),v1.end());
        int cnt=0;
        for(int p:v1){
            if(!vis[p]){
            int num1=0,num2=0;
            queue<int>q;
            vis[p]=1;
            num2++;
            node[p]=1;
            q.push(p);
            while(!q.empty()){
                int k=q.front();
                q.pop();
                for(int child: adj[k] ){
                    if(vis[child]) continue;
                    q.push(child);
                    vis[child]=1;
                    if(node[k]){
                        node[child]=0;
                    num1++;
                    }
                    else {
                        node[child]=1;
                        num2++;
                    }
                }
            }
            cnt+=max(num1,num2);


        }
        }
       cout<<"Case "<<i<<": "<<cnt<<'\n';
    }
}