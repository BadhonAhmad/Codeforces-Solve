#include<stdio.h>
#define ing unsigned long long
int main()
/*
 بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
"In the name of Allah, the Most Gracious, the Most Merciful".

لَا إِلَٰهَ إِلَّا ٱللَّٰهُ مُحَمَّدٌ رَسُولُ ٱللَّٰهِ
"There is no God but Allah, and Muhammad (PBUH) is the messenger of Allah."

##SALAH is the first thing you will be questioned about,
so donot make it the last thing on your mind.##

**He said, ‘I only complain of my suffering and my grief to Allah, and 
I know from Allah that which you do not know.**[Qur’an 12:86]

##And We will surely test you with something of fear and hunger and a loss of wealth and
lives and fruits, but give good tidings to the patient.##[Qur’an 2:155]

#*So whoever does righteous deeds while he is a believer – no denial will 
there be for his effort, and indeed We, of it, are recorders.*#[Qur’an 21:94]
**/
#include<bits/stdc++.h>
#define int unsigned long long
#define e endl

using namespace std;

int main()
{
    int cnt=0,f=0,sum=0,ans=0,t,a,b,c,x,y,z;
    cin>>t;
    while(t--){ 
    
    }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]


{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
            printf("%d %d %d\n",n-3,2,1);
        else{
            int x=(n-1)/2;
            if(x%2==0){
                printf("%d %d %d\n",((n-1)/2)-1,((n-1)/2)+1,1);
            }
            else{
                printf("%d %d %d\n",((n-1)/2)-2,((n-1)/2)+2,1);
            }
        }   
    }
}