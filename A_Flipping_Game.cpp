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
#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    int f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    scanf("%d",&t);
    int arr[10000];
    int ar[10000];
    int mx=-99999,start=0,end=0;
    for (i = 0; i < t; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0) ar[i]=1;
        else ar[i]=-1;
    }                     
    int s=0;            
    for ( i = 0; i < t; i++)
    {            
        sum+=ar[i];
        if(sum>mx){
            mx=sum; 
            start=s;
            end=i;
        }
        if(sum<0){
            sum=0;
            s=i+1;
        }
    }
    for (int i = start; i <= end; i++)
    {
        if(arr[i]) arr[i]=0;
        else arr[i]=1;
    }
    ans=0;
    for (int i = 0; i < t; i++)
    {
        ans+=arr[i];
    }
    
    printf("%d\n",ans);
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
