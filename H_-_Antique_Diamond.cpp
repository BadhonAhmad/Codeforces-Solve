 
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        double cnt=0,f=0,sum=0,ans,t,x,y,ar1,ar2,ar3,_,kl1,kl2,kl3,z,k1,k2,k3,j,k,a,b,c,n;
        scanf("%lf%lf%lf",&a,&b,&c);
        x=a+c;
        y=a+b;
        z=b+c;

        k1=acos((x*x+y*y-z*z)/(2*x*y));
        k2=acos((y*y+z*z-x*x)/(2*y*z));
        k3=acos((x*x+z*z-y*y)/(2*x*z));
     
        _=.5*x*y*sin(k1);

        kl1=a*a*.5*k1;
       
        kl2=b*b*.5*k2;

        kl3=c*c*.5*k3;
         ans=_ - kl1 - kl2 - kl3;
         printf("Case %d: %.10lf\n",i,ans);
        
    }  
    return 0;
}

