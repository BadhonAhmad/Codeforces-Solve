#include<stdio.h>
void printArray(int *arr,int s,int e){
        for (int i = s; i <= e; i++)
        {
            printf("{");
            for (int i = s; i <= e ; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("}\n");
        }
}
void printAllSubarray(int *arr,int n){
    for (int   s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            printArray(arr,s,e);
        }       
    }
}
int main()
{
     int arr[]={1,2,3,4,5};
     printAllSubarray(arr,5);
}