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
void solution(){
    vector<vector<int>> a(10);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int count;
        cin>>count;
        for (int j = 0; j < count; j++)
        {
            int problem;
            cin>>problem;
            a[i].push_back(problem);
        }
        
    }
    for (int  i = 0; i < n; i++)
    {
        
        for (int j = i+1; j < n; j++)
        {
            vector<int> solved(6,0);
            for (int b: a[i])
            {
                solved[b]=1;
            }
            for (int b: a[j])
            {
                solved[b]=1;
            }
            int total=accumulate(solved.begin(),solved.end(),0);
            if(total==5){ 
                yes;
                return ;
            }

        }
        
    }
    no;
    return;
}

int main()
{
    fastio;
    int cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,c,n;
    cin>>t;
    while(t--) solution();
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
