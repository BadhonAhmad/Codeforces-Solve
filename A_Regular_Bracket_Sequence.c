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
    s("%lld",&a);
    while (a--)
    {
        int fr=0,sc=0,wh=0;
        char ss[102];
        s("%s",ss);
        int l=strlen(ss);
        for ( i = 0; i < l; i++)
        {
            if(ss[i]==')') fr++;
            else if(ss[i]=='(') sc++;
            else wh++;
        }
        if(ss[0]==')' || ss[l-1]=='(') p("NO\n");
        else if(fr == sc && wh%2 != 0) p("NO\n");
        else if(fr>sc && wh != (fr-sc)) p("NO\n");
        else p("YES\n");

    }
    
    return 0;
}
//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]