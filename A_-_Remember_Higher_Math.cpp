 
#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    double cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t;
   for(int ii=1; ii<= t ; ii++){
        
        cin>>a>>b>>c>>x;
        ans=sqrt(((a*a)*x)/(1+x));
        printf("Case %d: %.9lf\n",ii,ans);
    
    }
    return 0;
}

