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
#define e endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main()
{
    fastio;
    ll cnt = 0, f = 0, sum = 0, ans = 0, t, x, q, y, z, i, j, k, a, b, c, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        // vector<ll>
        ll ev=0, od=0;
        ll evsm = 0, odsm = 0, tsm = 0;
        ans = 0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2)
            {
                od++;
                tsm += x;
            }
            else
            {
                ev++;
                tsm += x;
            }
        }
        f=0;

       // cout<<"ev"<<ev<<" od"<<od<<e;
        for (size_t i = 0; i < q; i++)
        {
            cin >> a >> b;
            if (a == 1)
            {
                if (b % 2 == 0  )
                {
                
                    tsm += (od)*b;
                    
                }
            else
            {
                tsm += od * b;
                od = 0;
                ev = n;
                f=1;
            }
            cout << tsm << e;
            }
        
        else
        {
            if (b % 2 == 0)
            {
                tsm += (ev * b);
            }
            else
            {
                tsm += ev * b;
                ev = 0;
                od = n;
            }

            cout << tsm << e;
        }
    }
}
return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
