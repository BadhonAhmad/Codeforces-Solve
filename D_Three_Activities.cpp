#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
bool cmp(pair<int,int> a, pair<int,int> b) {return a > b;}///boro theke choto base on 1st element
bool cmp2(pair<int,int>a, pair<int,int> b){ return a.second < b.second; }// choto theke boro base on 2nd element
void solve(){
    int i,j,k,n; 
    cin >> n;
    vector<pair<int, int>> aa(n), bb(n), cc(n);
    
    for(i = 0; i < n; i++){
        cin >> aa[i].first;
        aa[i].second = i;
        
    }
    for(i = 0; i < n; i++){
        
        cin >> bb[i].first;
        bb[i].second = i;
        
    }
    for(i = 0; i < n; i++){
        cin >> cc[i].first;
        cc[i].second = i;
        
    }
    sort(aa.begin(),aa.end(),cmp);
    sort(bb.begin(),bb.end(),cmp);
    sort(cc.begin(),cc.end(),cmp);
    int mx = INT_MIN;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                if(aa[i].second != bb[j].second && aa[i].second != cc[k].second && cc[k].second != bb[j].second){
                    mx = max(mx,aa[i].first + bb[j].first+cc[k].first);
                }
            }
        }
    }
    cout << mx << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define all(a) a.begin(), a.end()
// #define allr(a) a.rbegin(), a.rend()
// #define yes cout << "YES\n"
// #define SetBit(x, k) (x |= (1LL << k))
// #define ClearBit(x, k) (x &= ~(1LL << k))
// #define CheckBit(x, k) ((x >> k) & 1)
// #define no cout << "NO\n"
// int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> a(n), b(n), c(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].first;
//         a[i].second = i;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i].first;
//         b[i].second = i;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> c[i].first;
//         c[i].second = i;
//     }
//     sort(all(a));
//     sort(all(b));
//     sort(all(c));
//     int i, j, k;
//     int sm1 = 0;

//     sm1 = a[n - 1].first;
//     int i1 = a[n - 1].second, i2, i3;
//     int mx = INT_MIN;
//     for (j = n - 1, k = n - 1; j >= 0 && k >= 0;)
//     {
//         i2 = b[k].second;
//         i3 = c[j].second;
//         if (i1 != i2 && i3 != i1 && i2 != i3)
//         {
//             mx = max(mx, sm1 + b[k].first + c[j].first);
//             break;
//         }
//         if (b[k].first > c[j].first)
//         {
//             j--;
//         }
//         else if(b[k].first == c[j].first){
//             j--;
//             k--;
//         }
//         else
//         {
//             k--;
//         }
//     }
//     sm1 = b[n - 1].first;
//     i1 = b[n - 1].second;
//     for (j = n - 1, k = n - 1; j >= 0 && k >= 0;)
//     {
//         i2 = a[k].second;
//         i3 = c[j].second;
//         if (i1 != i2 && i3 != i1 && i2 != i3)
//         {
//             mx = max(mx, sm1 + a[k].first + c[j].first);
//             break;
//         }
//         if (a[k].first > c[j].first)
//         {
//             j--;
//         }
//         else if(a[k].first == c[j].first) j--,k--;
//         else
//         {
//             k--;
//         }
//     }
//     sm1 = c[n - 1].first;
//     i1 = c[n - 1].second;
//     for (j = n - 1, k = n - 1; j >= 0 && k >= 0;)
//     {
//         i2 = b[k].second;
//         i3 = a[j].second;
//         if (i1 != i2 && i3 != i1 && i2 != i3)
//         {
//             mx = max(mx, sm1 + b[k].first + a[j].first);
//             break;
//         }
//         if (b[k].first > a[j].first)
//         {
//             j--;
//         }
//         else if(b[k].first == a[j].first) j--,k--;
//         else
//         {
//             k--;
//         }
//     }
//     cout << mx << endl;
// }

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t = 1;
//     cin >> t;

//     while (t--)
//         solve();

//     return 0;
// }
