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
     ull cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,d,n;
     scanf("%llu",&t);
     while(t--){ 
        scanf("%llu%llu%llu%llu",&a,&b,&c,&d);
        if(a==b && c != d){
            x=b;
            y=c;
            z=c;
        }
        else if(a==b && d==c && b != c){
            x=b;
            y=c;
            z=c;
        }
        else if((a==d && a==b && a==c) || (a==b && a==c && a!=d)){
            x=a;
            y=a;
            z=a;
        }
       else if(a!=b && b==c && c==d){
        x=b;
        y=c;
        z=c;
       }
       else if(c == d && a != b){
        x=b;
        y=c;
        z=d;
       }
        else {
            x=b;
            y=c;
            z=c+1;
        }
        printf("%llu %llu %llu\n",x,y,z);
     }

     return 0;
 }
 
 //[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
 