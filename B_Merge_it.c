#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       long long n;
       scanf("%lld",&n);
       long long a,ans=0,r=0,c1=0,e2=0;
       
        for (int i = 0; i < n; i++)
        {
        scanf("%lld",&a);
        if(a%3==0){
            ans++;
           
        }
      
        else if(a%3 ==1){
            c1++;
        }
        else{
            e2++;
        }
    }
    int r1=0,r2=0;
    if(e2>c1){
        ans+=c1;
        r2=e2-c1;
       
        ans+=r2/3;
    }
    else{
        ans+=e2;
        r1=c1-e2;
      ans+=r1/3;
    }
    printf("%d\n",ans);
    
}
}