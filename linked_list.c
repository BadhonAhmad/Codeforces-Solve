#include <stdio.h>
#include <string.h>
  
int main()
{
    int a=1100;
    int l=sizeof(a)/sizeof(int);
    printf("%d",l);
    char str[50] = "I love programming.";
    
    memset(str + 5, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}