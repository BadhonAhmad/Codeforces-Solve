#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
pair<int,int> tree[4*N];

void build(int node, int st, int en){
    if(st == en){
        tree[node].first = a[st];
        tree[node].second = 1;
        return;
    }

    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);

    if(tree[2 * node].first < tree[2 * node + 1].first){
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[ 2 * node].second;
    }
    else if(tree[2 * node].first > tree[2 * node + 1].first){
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second= tree[2 * node + 1].second;
    }
    else{
        tree[node].first= tree[2 * node ].first;
        tree[node].second= tree[ 2 * node ].second + tree[2 * node + 1] .second;
    }

}

pair<int,int> query(int node ,int st, int en, int l, int r){
    if(r < st || l > en){
        
        pair< int , int > p;
        p.first = INT_MAX;
        p.second = -1;
        return p;
    }
    if(st >= l && en <= r){
        return tree[node];
    }
    int mid = (st + en) / 2;
    pair<int,int> left = query(2 * node , st, mid, l, r);
    pair<int,int> right = query(2 * node + 1, mid + 1, en, l, r);
    
    pair<int,int> q;
    if(left.first < right.first){
        return left;
    }
    else if(right.first < left.first){
        return right;
    }
    else{
        left.second = left.second + right.second;
        return left;
    }
}

void update(int node,int st, int en, int idx, int val){
    if(st == en){
        a[st] = val;
        tree[node].first = val;
        tree[node].second = 1;
        return;
    }
    int mid = (st + en) / 2;
    if(idx <= mid){
        update(2*node , st, mid, idx, val);
    }
    else{
        update(2 * node + 1, mid + 1, en, idx, val);
    } 
    // tree[node] = min(tree[2 * node ], tree[2 * node + 1]);
    if(tree[2 * node].first < tree[2 * node + 1].first){
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[ 2 * node].second;
    }
    else if(tree[2 * node].first > tree[2 * node + 1].first){
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second= tree[2 * node + 1].second;
    }
    else{
        tree[node].first= tree[2 * node ].first;
        tree[node].second= tree[ 2 * node ].second + tree[2 * node + 1] .second;
    }
}

int main()
{
    
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }

        build(1, 0, n-1);
        while (m--)
        {
            int type; cin >> type;
            if(type == 2){ 
                int l, r;
                cin >> l >> r;
                pair<int,int> ans = query(1, 0, n-1, l, r-1);
                
                cout  << ans.first <<" "<<ans.second << endl;
            }
            else{
                int idx,val;
                cin>>idx>>val;
                update(1, 0, n-1, idx, val);
            }
        }
    
}