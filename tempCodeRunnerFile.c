#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[10];
        int i=0,sum=0;
        int x=9;

        while(sum < n){
          //  printf("%d%d\n",x,n);
            if((sum+x)<=n){
            sum+=x;
            arr[i]=x;
            
           //printf("%d",arr[i]);
            i++;
            x--;
            }
            else{
                x--;
            }
        }
        //int a=sizeof(arr)/sizeof(int);
        int a=i;
        for (int i = a-1; i >=0; i--)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    
}