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
#define ss                 scanf
#define p                 printf

int main()
{
    ll ans=0,a,b,c,d,t,f,x,y,z,i,j,k,cnt=0,sum=0,mx=-1,mn=9999999;
    ss("%lld",&t);
    while (t--)
    {
    char s[53];
    ss("%s",s);
    k=strlen(s);
    char temp;
    for ( i = 0; i < k-1; i++)
    {
        f=0;
        for ( j = 0; j < k-i-1; j++)
        {
            if(s[j]>s[j+1]){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                f=1;
            }
        }
        if(f==0) break;    
    }
    for ( i = 0; i < k; i++)
    {
        p("%c",s[i]);
    }
    p("\n");
    }
    return 0;
}
