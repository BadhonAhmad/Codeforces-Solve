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

int32_t main ()
{
    int n,m;
    int counter=0;
   while(true)
   {
       cin >> m >> n;
       if (n ==0 && m ==0) break;
       counter++;
       if (counter > 1) cout << '\n';
       int field[102][102] = {0};
      for (int i=1; i<m+1; i++)
          for (int j=1; j<n+1; j++)
          {
              char temp;
              cin >> temp;
              if (temp == '*')
                  {
                      field[i][j] = -1;
                      if (field[i-1][j] != -1) field[i-1][j]++;
                      if (field[i-1][j-1] != -1) field[i-1][j-1]++; 
                       if (field[i-1][j+1] != -1) field[i-1][j+1]++;
                      if (field[i][j-1] != -1) field[i][j-1]++;
                      if (field[i+1][j] != -1) field[i+1][j]++;
                      if (field[i+1][j+1] != -1) field[i+1][j+1]++; 
                      if (field[i+1][j-1] != -1) field[i+1][j-1]++; 
                      if (field[i][j+1] != -1) field[i][j+1]++; 
                  }
          }
 
           cout << "Field #" << counter << ":\n";
            for (int i=1; i<m+1; i++)
           {
 
                for (int j=1; j<n+1; j++)
                    {
                        if (field[i][j] == -1) cout << '*';
                        else cout << field[i][j];
                }
                cout << "\n";
           }
 
   }
 
    return 0;
}