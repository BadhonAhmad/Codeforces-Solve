/*
 بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
 "In the name of Allah, the Most Gracious, the Most Merciful".

 لَا إِلَٰهَ إِلَّا اللَّٰهُ مُحَمَّدٌ رَaسُولُ اللَّٰهِ
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
const ll N=1e5+10;
using namespace std;
vector<int> g[N];
int vis[N];
int level[N];
void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    while (!q.empty())
    {
        int cur_v = q.front();

        q.pop();
        cout << cur_v << " ";
        for (auto child:g[cur_v])
        {
            if(!vis[child]) {
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v] + 1;
            }
        }
        
    }
    
}
int main()
{
    fastio;
    int tc;
    int cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> n;
    for (size_t i = 0; i < n-1; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for ( i = 1; i <= n; i++)
    {
        /* code */
        cout << i << ": " << level[i] << e;
        ans = max(ans, level[i]);
    }
 //  cout << ans << e;

    return 0;
}

//[All] praise is [due] to Allah, Lord of the worlds##[Qur’an 1:1]
