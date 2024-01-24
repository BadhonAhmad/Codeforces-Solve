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
#define ull unsigned long long
#define ll long long
#define e endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    int cnt=0,f=0,sum=0,ans=0,t,a=0,b=0,c,x=0,y=0,z;
    string s;
    cin>>s;
    a=s.find("AB");//returns us the position which the substrings starts from
    b=s.find("BA",a+2);//find the occurrence of BA from a+2 position inclusive 
    x=s.find("BA");
    y=s.find("AB",x+2);
    //cout<<a<<e<<b<<e<<x<<e<<y;
    if((a != -1 && b != -1) || (x != -1 && y != -1)) {yes;}
    else {no;}
    return 0;
}
//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]