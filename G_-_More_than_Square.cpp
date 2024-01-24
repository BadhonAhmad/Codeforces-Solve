 
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
    int cnt=0,f=0,sum=0,ans=0,t,x1,y1,x2,y2,x3,y3,x4,y4,z,i,j,k,a,b,c,n;
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(abs(x2 - x1) == abs(x4))
        if(x2 == x3){
            x4=x1;
            y4=y3;
        }
        ans=
        cout<<"Case "<<i<<": "<<x4<<" "<<y4<<endl;
    }

    return 0;
}

