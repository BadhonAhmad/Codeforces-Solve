#include<stdio.h>
#include<windows.h>
int main(){
    int d=950,m,s,h;
    printf("\nSet Your Time(HH:MM:SS)\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 ||s>60)
    {
        printf("Your input is invalid.\n");
        return 0;
    }
    while(12){
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12)
        h=1;
        printf("Time:");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("cls");
    }
    return 0;
}