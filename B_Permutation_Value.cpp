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
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t;
    while(t--){ 
        cin>>n;
        i=n;
        vector<ll> v;
        j=3;
        f=0;
        // if(n % 2){
        //     v.pb(j++);
        //     for (size_t k = 0; k < n-2; k++)
        //     {
        //         if(f==0){
        //             if( i == 2) --i;
        //        v.pb(i--);
        //         f=1;
        //         }
        //         else {
        //             if(j == 2) ++j;
        //               v.pb(j++);
        //         }
        //     }
        //     v.pb(2);
        // }
        cout<<1<<" ";
        for (size_t k = 0; k < n-2; k++)
        {
            if(f == 0){
                if( i == j) {
                    cout<<i<<" ";
                    ++j;
                    }
            else cout<<i--<<" ";
            f=1;
            }
            else{
                if(j == i){
                    cout<<j<<" ";
                    --i;
                } 
               else cout<<j++<<" ";
                f=0;
            }
        }
        cout<<2<<" "<<e;
        
        // for (size_t i = 0; i < v.size(); i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<e;
        
    }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]