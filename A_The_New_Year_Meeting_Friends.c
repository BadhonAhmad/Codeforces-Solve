#include<stdio.h>
int main()

{
    int arr[3];
    for (size_t i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (size_t i = 0; i < 2; i++)
    {
        int f=0;
        for (size_t j = 0; j < 2-i; j++)
        {
            if(arr[j]>arr[j+1]){
                arr[j]^=arr[j+1]^=arr[j]^=arr[j+1];
                f=1;
            }
        }
        if(!f) break;
    }
    printf("%d",arr[1]-arr[0]+arr[2]-arr[1]);
    
}