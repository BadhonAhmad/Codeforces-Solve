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
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
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
ll inversion(ll arr[],ll n){

    ll one = 0, zero = 0,sum=0;
    for (ll i = 0; i < n; i++)
    {
        
        if(arr[i] == 1){
            one++;
        }
        else {
            sum += one;
        }
    }
    return sum;
}
signed main()
{
    fastio;
    ll tc;
    ll cnt = 0, f = 0, sum = 0, ans = INT_MIN, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        ll  v[n];
        x = -1;
        y = -1;
        ll tx = 0,ty=0,ixx,iyy;
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ans = inversion(v, n);
        for ( i = 0; i < n; i++)
        {
            if(v[i] == 0){
                v[i] = 1;
                x = i;
                break;
            }
        }
        ans = max(ans, inversion(v, n));
        if(x != -1){
            v[x] = 0;
        }
        for (i = n-1; i >= 0 ; i--)
        {
            if(v[i] == 1){
                v[i] = 0;
                break;
            }
        }
        ans = max(ans, inversion(v,n));
        cout << ans << e;
        }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
