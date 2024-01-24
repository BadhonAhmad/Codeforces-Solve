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
    ll cnt = 0, f = 0, sum = 0, ans = 0, t, x, y, z, i, j, k, a, b, c, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ans=0;
        string s;
        cin >> s;
        vector<ll> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (size_t i = 0; i < v.size(); i++)
        {
            if (s[i] == '0')
            {
                if (s[i + 1] == '1' )
                {
                    ll idx1, idx2;
                    j = i;
                    idx1 = i;
                    while (s[j+1] == '1')
                    {
                        idx2 = j;
                        j++;
                    }
                    sort(v.begin() + idx1, v.begin() + idx2 +2);
                    for (size_t k = idx1; k < idx2; k++){
                       if(s[k] == '1'){
                        s[k]='0';
                        ans+=v[k];
                       }
                    }
                }
            }
            else {
                ans+=v[i];
            }
        }
            // for (size_t i = 0; i < v.size(); i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<e;
        cout<<ans<<e;
        
    }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
