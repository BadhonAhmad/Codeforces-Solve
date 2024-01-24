#include<stdio.h>
int main()
{
    int a,b,c,sum=0,cnt=0;
    
    scanf("%d%d",&a,&b);
    int arr[a];

    for (size_t i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (size_t i = 0; i < a-1; i++)
    {
         int f=0;
        for (size_t j = 0; j < a-i-1; j++)
        {
           
            if(arr[j]>arr[j+1]){
                arr[j]^=arr[j+1]^=arr[j]^=arr[j+1];
                f=1;
            }
        }
        if(!f) break;
        
    }
    
    for (size_t i = 0; i < a; i++)
    {
        if(arr[i]<0 && cnt<b){
            sum+=(-arr[i]);
            cnt++;
        }
    }
    printf("%d",sum);
    
}