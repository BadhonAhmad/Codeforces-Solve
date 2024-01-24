#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N = 2e5 + 10;
const int M=998244353;

int32_t main()
{
   
 
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int arr[n+5];
         for(int i=0;i<n;i++)cin>>arr[i];
         int ans=0;int x=-1;
         
         for(int i=n-2;i>=0;i--){
             if(arr[i]<=arr[i+1])continue;
             if(arr[i]>arr[i+1]){
                 ans+=arr[i]/arr[i+1];
                 ans--;
                 int r=0;
                 r=arr[i]%arr[i+1];
                 arr[i]=r+arr[i+1];
                 if(arr[i]==1){
                 x=i;
                 break;
             }
                 if(i-1>=0){
                     if(arr[i-1]<=r){
                         ans++;
                         arr[i]=r;
                     }
                     else {
                         arr[i]/=2;
                         ans++;
                     }
                 }
                 else{
                     if(arr[i]>arr[i+1])ans++;
                 }
             }
             if(arr[i]==1){
                 x=i;
                 break;
             }
         }
         for(int i=x;i>=0;i--)ans+=(arr[i]-1);
         cout<<ans<<endl;
     }
	return 0;
}










