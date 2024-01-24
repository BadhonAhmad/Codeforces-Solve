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

string solve(string s,char cc){

    string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string answ;
    int l1 = s.size();
    for (size_t i = 0; i < l1; i++)
    {
        int indx = ss.find(s[i]);
        if (cc == 'R')
        {
            answ += ss[indx - 1];
        }
        else{
            answ += ss[indx + 1];
        } 
    }
    return answ;
}

int main()
{
    fastio;
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    string s1;
    char ch;
    cin >> ch;
    cin >> s1;
    cout << solve(s1, ch);
    return 0;
}

