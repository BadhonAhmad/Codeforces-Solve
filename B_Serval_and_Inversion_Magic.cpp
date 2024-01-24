#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
bool ar[N];
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> tc;
    
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n;
        string s1,s2,s3;
        cin >> s1;
        memset(ar, 0, sizeof(ar));
        a = 1;
        set<int> s;
        if(n%2){
            j = n/2+1;
            for (i = 0; i < n / 2; i++,j++){
                s2.pb(s1[i]);
                s3.pb(s1[j]);
            }
            reverse(all(s3));
            for (i = 0; i < n / 2; i++){
                if(s2[i] != s3[i]){
                    ar[i] = 1;
                }
                s.insert(ar[i]);
            }
            if(s.size() == 1){
                yes;

            }
            else{ 
                for (i = 0; i < n / 2; i++){
                    if(ar[i]){
                        
                        if(ct>=1){
                            if(i-y>=2){
                                f = 1;
                                break;
                            }
                        }
                        y = i;
                        ct++;
                    }
                }
                if(f)
                    no;
                else
                    yes;
            }
        }
        else{
            j = n / 2;
            for (i = 0; i < n / 2; i++,j++){
                s2.pb(s1[i]);
                s3.pb(s1[j]);
            }
            reverse(all(s3));
            
            for (i = 0; i < n / 2; i++){
                if(s2[i] != s3[i]){
                    ar[i] = 1;
                }
                s.insert(ar[i]);
            }
            if(s.size() == 1){
                yes;
            }
            else{
                    for (i = 0; i < n / 2; i++){
                    if(ar[i]){
                        if(ct>=1){
                            if(i-y>=2){
                                f = 1;
                                break;
                            }
                        }
                        y = i;
                        ct++;
                    }
                }
                if(f)
                    no;
                else
                    yes;
            }
        }
    }
    return 0;
}