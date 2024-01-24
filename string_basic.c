#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={"my name is ahmad"};
    
    int a,b;
    char s[]={"name"};
    b=(int) str;
    
    a=(int)strstr(str,s);
        
    printf("%d",a-b+1);

}