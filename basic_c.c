

#include<stdio.h>
#include<string.h>
int main()
{
    int u;
    scanf("%d",&u);
    for (int i = 1; i <= u; i++){ 
        char ar[101];
       
        scanf("%s", ar);
        printf("%s\n", ar);
         int l = strlen(ar);
         printf("%d\n", l);
    }
    
    
    return 0;
}
