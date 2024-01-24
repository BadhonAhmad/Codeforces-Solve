#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    int n;
    while (scanf("%d",&n) != EOF)
    {
            int q = 2;
            int arr[10000] = {0};
            arr[0] = 1;
            int num = 0;
            int x = 0;
            int len = 1;
            while (q<=n)
            {
                num = 0;
                x = 0;
                while(x < len){
                    arr[x] = arr[x] * q;
                    arr[x] = arr[x] + num;
                    num = arr[x] / 10;
                    arr[x] = arr[x] % 10;
                    x++;

                }
                while (num != 0)
                {
                    arr[len] = num % 10;
                    num = num / 10;
                    len++;
                }
                q++;
                
                
            }
            len--;
            cout << n << "!" << endl;
            while(len>=0){
                    cout << arr[len];
                    len = len - 1;
                }
                cout << e;
    }
    return 0;
}

