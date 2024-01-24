//La ilaha illallahu muhammadur rasulullah
//bismillah hirrahmanir rahim
//Allahu Akbar

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int f=0;
        if(n==1) printf("%d",1);
        else if(n%2 == 0){        
        for (int  i = 1; i <= n; i++)
        {
            if(f==0){
                f=1;
                 printf("%d ",i+1);
            }
            else{
                printf("%d ",i-1);
                f=0;
            }

        }
        }
        else{
            printf("%d ",1);
            for (int i = 2; i <= n; i++)
            {
                if(f==0){
                    f=1;
                    printf("%d ",i+1);
                }
                else{
                    f=0;
                    printf("%d ",i-1);
                }
            }
            
        }
        printf("\n");
      
        
    } 
    
}