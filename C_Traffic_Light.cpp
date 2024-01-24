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
        
        string s2;
        char s1;
        cin>>n>>s1;
        cin>>s2;
        f=0;
        ll ansf2;  ll ansff,ansfff;
        if(s1 == 'g'){
            cout<<0<<e;
            continue;
        }
        for (size_t i = 0; i < s2.size(); i++)
        {
            if(s2[i] == 'g'){
                f=1;
            }
            else if(s2[i] == s1 && f==1){
                f=2;
            }
        }
        ll idx=-1111,lo,hi,idx2=INT_MAX,idx22=INT_MAX;
        if(f == 1){
            lo=0,hi=s2.size()-1;
                while(1){
                    if(s2[lo] == s1){
                        idx=lo;
                        break;
                    }lo++;
                }
                while(hi  >  idx ){
                    if(s2[hi] == 'g'){
                        idx2=min(idx2,hi);
                    }
                    hi--;
                }
            cout<<(idx2-idx)<<e;
        }
        else if(n == 2 ){
            cout<<1<<e;
        }
        else if(f==2){
            lo=0,hi=s2.size()-1;
            while(1){
                    if(s2[lo] == s1){
                        idx=lo;
                        break;
                    }
                    lo++;
                }
                while(hi  >  idx){
                    if(s2[hi] == 'g'){
                        idx22=min(idx22,hi);
                    }
                    hi--;
                }
                ansff=idx22-idx;
              //  cout<<"ansff"<<ansff<<e;
                lo=0,hi=s2.size()-1;
            while(1){
                if(s2[lo] == 'g'){
                    idx=lo;
                    break;
                }
                lo++;
            }
            while(idx<hi){
                if(s2[hi] == s1){
                    idx2=hi;
                    break;
                }
                hi--;
            }
          //  cout<<ansfff<<e;
          ansfff=(s2.size()-idx2)+idx;
          ansf2=max(ansfff,ansff);
            cout<<ansf2<<e;
        }
        
    }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
