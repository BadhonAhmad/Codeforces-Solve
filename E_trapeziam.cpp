#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin>>t;
   for (int i = 1; i <= t; i++)
   {
    double a,b,c,d,ans;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double x,h;
    x=((a-c)*(a-c)+(d*d-b*b))/(2*(a-c));
    h=sqrt((d*d-x*x));
    ans=((a+c)*h)/2;
    printf("Case %d: %lf\n",i,ans);
    }
}