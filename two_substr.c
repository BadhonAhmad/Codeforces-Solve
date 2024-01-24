#include<stdio.h>
#include<string.h>

int main()
{
    char ss[100000];
    char *p;
    scanf("%s",ss);
    if(((p=strstr(ss,"AB") )&& (strstr(p+2,"BA")))|| ((p=strstr(ss,"BA")) && (strstr(p+2),"AB"))){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   
}