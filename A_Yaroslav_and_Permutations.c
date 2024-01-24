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
 */

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
int ar[10001];
int main()
{
    ll ans=0,a,b,c,d,x,y,z,i,j,k,cnt=1,sum=0,mx=-1,mn=9999999;
    s("%lld",&a);
    int arr[a];
    for ( i = 0; i < a; i++)
    {
        s("%lld",&k);
        ar[k]++;
        if(ar[k]>mx) mx=ar[k];   
    }
    // for ( i = 0; i < 10000; i++)
    // {
    //     if(ar[i]>mx) mx=ar[i];
    // }    
    if(mx>(a+1)/2) no;
    else yes;
   // p("%d\n",mx);
    return 0;
}
//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]