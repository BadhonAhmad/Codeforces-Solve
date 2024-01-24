#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
   int a,b,c;
   char x,y,z[10];
   int cnt=0;
   while ((scanf("%d%c%d%c%s",&a,&x,&b,&y,&z)) != EOF)
   {
    sscanf(z,"%d",&c);
    //cout<<c<<endl;
      if(x == '+'){
        if(a+b == c){
            cnt++;
        }
      }
      else{
        if(a-b == c){
            cnt++;
        }
      }
   }
    cout<<cnt<<endl;
}