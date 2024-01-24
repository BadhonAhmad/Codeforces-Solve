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
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    while(1){
        char s[1000];
        
        cin >> s;
        j = strlen(s);
        if(s[0] == '0')
            break;
        else{
            a = s[ j - 1] - '0';
         // printf("a=%lld", a);
            s[ j - 1] = '\0';
           
            cout << s<< endl;
            k = j - 1;
            while(k != 2){
                
                k--;
        
                s[k] = ' ';
            }
            sscanf(s,"%lld",b);
        }
    }
    return 0;
}

