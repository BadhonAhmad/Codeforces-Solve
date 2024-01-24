#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N],tree[4 * N],f=0;
int n;

void build(int node, int st, int en){
    if(st == en){
        tree[node] = a[st];
        f=0;
        return;
    }
    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    f++;
    if(f%2){
        tree[node] = tree[2 * node] | tree[2 * node + 1];
    }
    else{
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
    }
}


void update(int node, int st, int en, int id, int val){
    if(en < id or st > id) return;
    if(st == id && id == en){
        a[st] = val;
        tree[node] = val;
        f=0;
        return;
    }
    int mid = (st + en) / 2;
    if(id <= mid)
    update(2 * node , st, mid, id, val);
    else 
    update(2 * node + 1, mid + 1, en, id, val);
    f++;
    if(f%2){
        tree[node] = tree[2 * node] | tree[2 * node + 1];
    }
    else{
        tree[node] = tree[2 * node] ^ tree[2 * node + 1];
       
    }
}

int main()
{
    int m;
    cin >> n >> m;
    int total_No = 1 << n;
    for(int i = 1; i <= total_No; i++) 
        cin >> a[i];
    build(1,1,total_No);
    while (m--)
    {
        int id,val;
        cin >> id >> val;
        update(1, 1, total_No, id, val);
        cout << tree[1] << endl;
    }
    

}