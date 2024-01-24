#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin >>str1 >> str2;
    int a = str1.size(), b = str2.size();
    cout << b << endl;
    string ans = "";
    int i = b;
    while (i > 0)
    {
        string ab = str2.substr(0,i);
        i--;
        //cout << ab  << endl;
        /* code */
        string tm ,tmm;
        int aa = 0,bb = 0;
        for(int j = 0; j < a; j++){
            tm += ab;
            tmm += ab;
            if(tmm == str2){
                aa = 1;
            }
            if(tm == str1){
                bb = 1;
            }
            if(aa && bb) break;
           // cout << tm << " " << tmm << endl;
        }
        if(aa == 1 && bb == 1){
            cout << ab << endl;
            //return ab;
        }
    }
     cout << "no";
    string asn;
   // return asn;



    // for (int i = 1; i <=b; i++)
    // {
    //     string ab = str2.substr(0,i+1);
    //     string ans = "";
    //     for(int j = 0; j < a; j++){
    //         ans += ab;
    //         if(ans == str1){
    //             cout << ab << endl;
    //             return 0;
    //         }
    //     }

    // }
}