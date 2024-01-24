/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

int calNum(int year)
{
    return (year / 4) - (year / 100) + (year / 400);
}

int leapNum(int l, int r)
{
    l--;
    int num1 = calNum(r);
    int num2 = calNum(l);
    return (num1 - num2);
}
int ct = 1;
void solve()
{
    int i,j,a,b,c,sm=0,d1,d2,y1,y2,n,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string m1, m2;
    
    char c1, c2;
    cin >> m1 >> d1 >> c1 >> y1;
    cin >> m2 >> d2 >> c2 >> y2;
    if(m2 == "January" || m2=="February"){
        if(m2 == "January"){
            y2--;
        }
        else{
            if(d2 < 29){
                y2--;
            }
        }
    }
    if(m1 != "January" && m1 != "February"){
        y1++;
    }
    cout<<"Case "<<ct++<<": "<<leapNum(y1, y2)<<e;
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}