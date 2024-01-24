/*
 بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ 
 "In the name of Allah, the Most Gracious, the Most Merciful".
 
 لَا إِلَٰهَ إِلَّا ٱللَّٰهُ مُحَمَّدٌ رَسُولُ ٱللَّٰهِ
 "There is no God but Allah, and Muhammad (PBUH) is the messenger of Allah."
 
 ##SALAH is the first thing you will be questioned about,
 so donot make it the last thing on your mind.##
 
 **He said, I only complain of my suffering and my grief to Allah, and 
 I know from Allah that which you do not know.**[Qur’an 12:86]
 
 ##And We will surely test you with something of fear and hunger and a loss of wealth and
 lives and fruits, but give good tidings to the patient.##[Qur’an 2:155]
 
 #*So whoever does righteous deeds while he is a believer – no denial will 
 there be for his effort, and indeed We, of it, are recorders.*#[Qur’an 21:94]
 **/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define s                 scanf
#define p                 printf

int main()
{
    ll ans=0,a,b,c,d,x,y,z,i,j,k,cnt=0,sum=0,mx=-1,mn=9999999;
    s("%lld%lld",&a,&b);
    c=a+b;
    char aa[15],bb[15],cc[15],aa1[15],bb1[15],cc1[15];
    sprintf(aa,"%lld",a);//int to string
    sprintf(bb,"%lld",b);
    sprintf(cc,"%lld",c);
    //printf("%s",aa);
    int l1=strlen(aa);
    int l2=strlen(bb);
    int l3=strlen(cc);
    int m=0;
    for ( i = 0; i < l1; i++)
    {
        if(aa[i] != '0') aa1[m++]=aa[i];

    }
    aa1[m]='\0';
    int n=0;
    for ( j = 0; j < l2; j++)
    {
        if(bb[j] != '0') bb1[n++]=bb[j];
    }
    bb1[n]='\0';
    int o=0;
    for ( k = 0; k < l3; k++)
    {
        if(cc[k] != '0') cc1[o++]=cc[k];
    }
    cc1[o]='\0';
   // printf("%s",aa1);
    sscanf(aa1,"%lld",&x);//string to integer
    sscanf(bb1,"%lld",&y);//
    sscanf(cc1,"%lld",&z);
    int sum2=x+y;
    if(sum2==z) p("YES\n");
    else p("NO\n");
    return 0;
}
//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]