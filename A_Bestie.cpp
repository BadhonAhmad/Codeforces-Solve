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

int main()
{
    fastio;
    int tc;
    ll cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;

    while (tc--)
    {  
        
        cin >> n;
        vll v(n+1), vv(n);
        f = 0;
        ans = 0;
        cnt = 0;
        j = 0;
        x = 0;
        
        for (size_t i = 1; i <= n; i++)
        {
            cin >> v[i];
            ++x;
            if(j == 0 && x >= 2){
                z = __gcd(z,v[i]);
                if(z == 1){
                    ans = 0;
                    j = 1;
                }
            }
            if(x<2) z = v[i];
            if(v[i] % n ){
                f = 1;
            }
        }
        if(j==1 && z==1){
            cout << ans << e;
           // cout << "hi" << e;
            continue;
        }
        if(n == 1 &&  v[n] == n){
            cout << 0 << e;
            continue;
        }
        if(n == 1 && v[n] > n){
            cout << 1 << e;
            continue;
        }
        if(n == 2){
            sort(all(v));
            if(v[2] %v[1] == 0){
                cout << 2 << e;
            }
            else
                cout << 0 << e;
            continue;
        } 
        if(f == 0){
            if(n<=3){
                cout << 2 << e;
                continue;
            }
            else{
                cout << 3 << e;
                continue;
            }

        }
        if(f == 1){
            if(v[n] % n == 0){
                cout << 1 << e;
            }
            else{
                cout << 1 << e;
            }
                
        }
        // else{
        //     // for (size_t i = n; i > 0 ; i--)
        //     // {
        //     //     if(v[n] % i){
        //     //         if(i == n){
        //     //             cout << 1 << e;
        //     //             break;
        //     //         }
                    
        //     //     }
        //     //     else{
        //     //             vv.pb(i);
        //     //             cnt++;
        //     //             if(cnt == 2){
        //     //                 break;
        //     //             }
        //     //         }
        //     // }
        //     // cout<<n+
        //     cout << 1 << e;
        // }
       
    }
    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
