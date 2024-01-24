#include <bits/stdc++.h>
using namespace std;
#define N 510
const int INF = 1e9;
int dist[N][N];
int main()
{
    int t;
    cin >> t;
    while(t--){ 
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == j) dist[i][j] = 0;
                else dist[i][j] = INF;
            }
        }
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int a;
                cin >> a;
                dist[i][j] = a;
            }
        }
        for(int k = 0; k < n; k++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j<n; j++){
                cout << dist[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}