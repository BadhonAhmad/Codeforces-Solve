// // #include <bits/stdc++.h>
// // using namespace std;

// // #define e               "\n"
// // #define int             long long 
// // #define SetBit(x,k)     (x|=(1LL<<k))
// // #define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
// // #define yes     cout<<"YES\n"
// // #define no      cout<<"NO\n"
// // #define mod     1000000007


// // void solve()
// // {
// //     int n;
// //     cin >> n;
// //     int a[n];
// //     int sm = 0;
// //     int x = 0;
// //     for (size_t i = 0; i < n; i++)
// //     {
// //         int x;
// //         cin >> x;
// //         sm += abs(x);
// //         if(x<=0)
// //             a[i] = 1;
// //         else{
// //             a[i] = 0;
// //         }
       
// //     }
// //     int i = 0, ct = 0;
// // ;
// //     while (i<n)//-1 7 8  -1 188 13 1 0 0 1 0 0 1 0 1
// //     {
// //         if(a[i] == 1){
// //             ct++;
// //             while (a[i]==1)
// //             {
// //                 i++;
// //             }
// //         }
// //         else{
// //             i++;
// //         }
        
// //     }
    
// //     cout << sm << " " << ct << e;

// //     return;
// // }
     
// // int32_t main()
// // {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);
// //     int T = 1;
// //     cin >> T;
// //     while (T--)
// //         solve();
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// #define e               "\n"
// #define int             long long 
// #define SetBit(x,k)     (x|=(1LL<<k))
// #define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
// #define yes     cout<<"YES\n"
// #define no      cout<<"NO\n"
// #define mod     1000000007


// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     int sm = 0;
//     int ct = 0;
//     int x = 0,z=0;
//     int f = 0,g=0;
//     ct = 1;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         sm += abs(x);
//         if(x < 0)
//         {
//             f = 1;
//             g = 0;
//         }
//         if(x>0 && f==1){
//             g = 1;
//         }
//         if(g){
//             ct++;
//         }
//     }
//     cout << sm << " " << ct << e;

//     // int i = -1;
//     //  ct = 0;//-1 -2 1 -3
//     // while (i < n)
//     // {
//     //     i++;
//     //     if(a[i] < 0){
//     //         ct++;
//     //         while (a[i]<=0 && i<n)
//     //         {
//     //             i++;
//     //         }
//     //     }
       
//     // }

//     // cout << sm<<" "<<ct << e;

//     return;
// }
     
// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int T = 1;
//     cin >> T;
//     while (T--)
//         solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007


void solve()
{
    int n;
    cin >> n;
    int x,sm=0;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> x;
        sm += abs(x);
        if(x>0 || x<0){
            v.push_back(x);
        }
    }
    int ct = 0;
    for (int i = 0; i < v.size(); i++){
        if(v[i]<0){
            ct++;
            while (v[i]<0)
            {
                /* code */
                i++;
            }
            i--;
        }
    }
    cout << sm << " " << ct << e;

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