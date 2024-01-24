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
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main()
{
    fastio;
    int tc;
    vll v, vv, vvv, anss;
    cin >> tc;

    ll cnt = 0, f = 0, sum = 0, ans = 0, t, x, y, z, i, j, k, a, b, c, n, m;
    j = tc;
    while (tc--)
    {
        cin >> n;
        v.pb(n);
    }
    sort(v.begin(), v.end());
    for (size_t i = 0; i < j - 1; i++)
    {
        cin >> n;
        vv.pb(n);
    }
    sort(all(vv));
    for (size_t i = 0; i < j; i++)
    {
        f = 0;
        for (size_t x = i; x < vv.size(); x++)
        {
            if (v[i] == vv[x] )
            {
                f = 1;
                break;
                
            }
        }
        if (!f)
        {
            anss.pb(v[i]);
            break;
        }
    }

    for (size_t i = 0; i < j - 2; i++)
    {
        cin >> n;
        vvv.pb(n);
    }
    sort(all(vvv));
     for (size_t i = 0; i < vv.size(); i++)
    {
        f = 0;
        for (size_t x = i; x < vvv.size(); x++)
        {
            if(vv[i] == vvv[x] && vv[i] > 0){
                f = 1;
                vvv[x] = -1;
                break;
            }
        }
        if(!f){
            anss.pb(vv[i]);
            break;
        }

        
    }
    for (size_t i = 0; i < anss.size(); i++)
    {
        cout << anss[i] << e;
    }
    
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
