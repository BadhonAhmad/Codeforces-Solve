#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int W,H,x1,y1,x2,y2;
    cin >> W >> H;
    cin >> x1 >> y1 >> x2 >> y2;
    int w,h;
    cin >> w >> h;
    //int newx1 = x1, newx2 = x2, newy1 = y1 , newy2 = y2;
    int dist = 0,mn = INT_MAX;
   // cout << setprecision(9) << fixed;
    int curw = x2 - x1, curh = y2 - y1;
    if(curw + w > W && curh + h > H){
        cout << -1 << endl;
        return;
    }
    if(x1 - w >= 0 || y1 - h >= 0 || x2 + w <= W || y2 + h <= H){
        cout << dist << endl;
        return;
    }

    if(x2-x1+w <= W){
        mn = min(mn, max(0,w-x1));
        mn = min(mn,(max(0,x2-(W-w))));
    }
    if(y2 - y1 + h <= H){
        mn = min(mn,max(0,h-y1));
        mn = min(mn,(max(0,y2 -(H - h))));
    }
    cout << (mn) << endl;



}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

