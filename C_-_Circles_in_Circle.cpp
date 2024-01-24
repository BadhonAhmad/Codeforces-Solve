 
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
   for (int i = 1; i <= t; i++)
   {
        double r, n,teta,ans;
        cin>>r>>n;
        teta=3.141592654/n;
        ans=(r*sin(teta))/(1+sin(teta));
       
        printf("Case %d: %lf\n",i,ans);

    }
    return 0;
}

