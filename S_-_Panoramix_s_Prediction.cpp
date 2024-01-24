#include <stdio.h>
#include <math.h>
#define SZ 50

int cnt, primes[SZ], siv[SZ];

void seive()
{
    int limit = sqrt(SZ+1);
    for (int i = 3; i<=limit; i+=2)
        if(!siv[i])
            for (int j = i*i; j<SZ; j+=i+i)
                siv[j]=1;

    primes[cnt++] = 2;
    for (int i = 3; i<SZ; i+=2)
        if(!siv[i]) primes[cnt++] = i;
    return;
}

int main()
{
    seive();
    char s[] = ",\n";

    int n,m;

    scanf("%d%d",&n,&m);
    int cc=0;
    for (int i = 0; i<cnt; i++)
    {

        if(primes[i] == n){
            cc++;
        }
        if(primes[i] < m && primes[i] > n){
            printf("NO");
            return 0;
        }
        if(primes[i] == m){
            cc++;
        }
    }
     if(cc>1) printf("YES");
     else printf("NO");

    return 0;
}