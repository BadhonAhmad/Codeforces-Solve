#include <bits/stdc++.h>


using namespace std;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




int main(){
    Faster;
    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(sum%2==0){
            cout<<0<<endl;
            continue;
        }
        
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                int x=a[i];
                int cnt=0;
                while((x%2==1)){
                    x/=2;
                    cnt++;
                }
                ans=min(ans,cnt);
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                int x=a[i],cnt=0;
                while(x>0 and (x%2==0)){
                    x/=2;
                    cnt++;
                }
                ans=min(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
