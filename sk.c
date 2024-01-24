#include<stdio.h>
#include<conio.h>

  int i=0,n,x=0,old[100],nw[100],first,j;

int main()
{
    FILE *sk;


///
//    sk=fopen("number1.txt","w+");
//
// printf("How Many People Eat Meal in Morning?\n");
//    scanf("%d",&first);
//    printf("\n\n\n");
//
//    for(i=0; i<first; i++)
//       {
//           scanf("%d",&x);
//           putw(x,sk);
//       }
//    fclose(sk);
///
/*

1
2
3
4
5
6

*/

    sk=fopen("number1.txt","r+");

    printf("Previous Day's Cost:\n");
    while((n=getw(sk)) != EOF)
    {
        old[j++]=n;
        printf("%d\n",old[j-1]);
    }
    fclose(sk);

    printf("How Many People Eat Meal in Morning?\n");
    scanf("%d",&n);
    printf("\n\nInput Amount(TK)\n\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&nw[i]);
        nw[i]=nw[i]+old[i];
//        printf("----%d----\n",nw[i]);
//        printf(" old=----%d----\n",old[i]);
    }




    sk=fopen("number1.txt","w+");

    for(i=0; i<n; i++)
        putw(nw[i],sk);

    fclose(sk);


    sk=fopen("number1.txt","r+");
int cxx=1;
printf("-----------------------------------------\n");
    while((n=getw(sk)) != EOF)
    {

        printf("%d No :%d\n",cxx++,n);

    }
    printf("\n                   Thank You Sorif (Manager)");
    printf("\n\n                ----------By Sk Sazid----------\n");


    return 0;
}