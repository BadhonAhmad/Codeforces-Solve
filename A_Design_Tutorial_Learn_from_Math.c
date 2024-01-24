#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2){
        printf("%d %d",n-9,9);
    }
    else printf("%d %d",n-4,4);
}