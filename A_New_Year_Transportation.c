/*
 بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
 "In the name of Allah, the Most Gracious, the Most Merciful".
 
 لَا إِلَٰهَ إِلَّا اللَّٰهُ مُحَمَّدٌ رَسُولُ اللَّٰهِ
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
#define yes               printf("YES\n")
#define no                printf("NO\n")

int main()
{
    ll ans=0,a,b,c,d,x,y,z,i,j,k,cnt=0,sum=0,mx=0,mn=9999999;
    s("%lld%lld",&a,&b);//a=8 b=4
    ll ar[a+1];
    ar[0]=0;
    for (size_t i = 1; i <= a-1; i++)
    {
        s("%lld",&ar[i]);
    }
    // for (size_t i = 1; i <= a-1; i++)
    // {
    //     p("%lld ",ar[i]);
    // }
    
    ans=1;
    while (ans<b)
    {
        ans+=ar[ans];
        
       
        if(ans == b){
            mx=1;
            break;
        }
    }
    if(mx) yes;
    else no;
    
    
    return 0;
}
//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]