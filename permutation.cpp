
#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define pb(a)             push_back(a)
#define e                 endl

using namespace std;
int arr[100001];
int arr1[100001];
int arr2[100001];
int main()
{
    fastio;
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t;
    while(t--){ 
        cin>>a;
        vector<int> v;
       // vector<int> v1={0};
       for ( i = 0; i < a; i++)
       {
       cin>>arr1[i];//0 1 2 3
        arr[arr1[i]]++;//4 1 3 2 te ache 1 2 2 1
       }
       cin>>c;//2
       for ( j = 0; j < c; j++)
       {
      
        cin>>arr2[j];//0 1
        arr[arr2[j]]++;//3 1 te 2 2
       }
       for ( k = 0; k <= a; k++)
       {
        
        if(arr[arr1[k]] == 1){
            v.pb(arr1[k]);
        }
        arr[arr1[k]]=0;
       }
       for ( i = 0; i < v.size(); i++)
       {
        cout<<v[i]<<" ";
       }cout<<e;
      
       v.clear();
    
    }
    return 0;
}

