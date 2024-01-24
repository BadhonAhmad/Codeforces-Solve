#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    string substr1="heavy";
    vector<int> v1,v2;
    string sub2 = "metal";
    int index = -1;
   int start = 0,start2=0;
    int d = -1;
    int f = 0;
    while (1)
    {
     index = str.find(substr1,start);
    if(index==str.size()-5)
        f = 1;
    if(index>=0){
        v1.push_back(index);
        start = index;
        index = -1;
    }
     d = str.find(sub2,start2);
    if(d == str.size()-5  ){
        f = 1;
    }
        if(d>=0){
            v2.push_back(d);
            start2 = d;
            d = -1;
        }
        if(f) break;
    }
    for(auto it:v1){
    cout << it << ' ';
    }
    for(auto it:v2){
    cout << it << ' ';
    }
}