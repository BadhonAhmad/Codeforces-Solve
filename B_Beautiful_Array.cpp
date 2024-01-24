#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    int t;                  cin>>t;
    while(t--){
        ll n;               cin>>n;
        ll k,b,s;           cin>>k>>b>>s;
 
        if((k*b)<=s){
            ll LastValue = min(s,(k*b)+k-1);
            if(s-LastValue>((k-1)*(n-1))){
                cout<<-1<<endl;
                continue;
            }
            vector<ll> ans(n);
            ans[n-1]=LastValue;
            s-=LastValue;
            for(int i=n-2;i>=0;i--){
                if(s==0){
                    ans[i]=0;
                }
                else if(s<=k-1){
                    ans[i]=s;
                    s=0;
                }
                else if(s>k-1){
                    ans[i]=k-1;
                    s-=(k-1);
                }
            }
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
            continue;
        }
    }
    return 0;
}
