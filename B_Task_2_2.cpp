#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h , w ;
    cin >> n >> h >> w;
    int barite = h, offic = w;
    for(int i = 0 ; i <  n; i++){
        char c,cc;
        cin >> c >> cc;
        if(c == 'Y'){
            cout <<"Y ";
            offic++;
            barite--;
        }
        if(c == 'N'){
            if(offic > 0){
                cout <<"N ";
            }
            else{
                cout << "Y ";
                offic++;
                barite--;
            }
        }
        if(cc == 'Y'){
            cout << "Y ";
            offic--;
            barite++;
        }
        if(cc == 'N'){
            if(barite > 0) {
                cout << "N ";
            }
            else {
                cout << "Y ";
                barite++;
                offic--;
            }
        }
        cout << '\n';
    }
    

}