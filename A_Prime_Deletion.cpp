
#include <bits/stdc++.h>
using namespace std;





























































































void evlos(){
    int i,j,k,a,b,c,d,x,y,z,ans=0,sm=0,ct=0,n,m,f=0;
    string s,t;
    cin>>s;
    n=s.size();
    for( i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            f=0;
            if(i != j){
                //cout<<i<< ' '<<j<<endl;
                a=s[i]-'0';
                b=(s[j]-'0');
                sm=a*10+b;
                for(k=2; k<sm; k++){
                    if(sm%k == 0){
                        f=1;
                        break;
                    }
                }
                if(!f){
                    cout<<sm<<endl;
                    return;
                }
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T=1;cin>>T;
    while(T--) evlos();
    return 0;
}
