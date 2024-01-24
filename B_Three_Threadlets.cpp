#include <bits/stdc++.h>
using namespace std;


void solve(){
    int ar[3];
    for(int i = 0; i < 3; i++){
        cin >> ar[i];
    }
    sort(ar,ar+3);

    if(ar[2] % ar[0] != 0 || ar[1] % ar[0] != 0){
        cout<<"NO\n";
    }
    else{
        int ct= ar[2] /ar[0] -1 + ar[1] / ar[0] -1;
        if(ct > 3) cout << "NO\n";
        else cout << "YES\n";
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

