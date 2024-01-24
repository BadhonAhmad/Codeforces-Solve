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
#define e endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t;
    while(t--){ 
      a=5;
      string s;
      cin>>n;
      cin>>s;
      cnt=0;
      int T=0,i=0,m=0,u=0,r=0;
      if(n!=a || s.size() != a){
        no;
      }
      else{
        for (int j = 0; j < s.size(); j++){
            if(s[j]=='r' ){
             r++;   
            }
            else if(s[j]=='m'){
                m++;
            }
            else if( s[j]=='T') T++;
            else if(s[j]=='u') u++;
            else if(s[j]=='i') i++;
        }
        if(T==1 && i==1 && m==1 && u==1 && r==1){
            yes;
        }
        else {
            no;
        }
        
      }
    }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
