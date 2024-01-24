#include <bits/stdc++.h>
using namespace std;
int a[200005];
pair<int,int> tree[4 * 200005];
#define int long long
void build(int node, int low, int high){

    //if returns bactracking will be execute 
    if(low == high){
        tree[node].first = a[low];
        tree[node].second = 1;
        return;
    }

    //if doesn't match the base case execution starts from here
    int mid=(low + high) / 2;
    build(2 * node , low, mid);//(2 * 1 , 1 , 4) [for 1 to 8]
    build(2 * node + 1, mid + 1, high);//(2 * 1 + 1, 5 , 8) [for 3 to 8]

    //backtracking
    if(tree[2 * node ].first < tree[2 * node + 1].first){
        tree[node].first =tree[2 * node ].first;
        tree[node].second =tree[2 * node ].second;
    }
    else if(tree[2 * node ].first > tree[2 * node + 1].first){
        tree[node].first =tree[2 * node + 1].first;
        tree[node].second =tree[2 * node + 1].second;
    }
    else{
        tree[node].first=tree[2 * node].first;
        tree[node].second = tree[2 * node ].second + tree[2 * node + 1].second;
    }
    
}

pair<int,int> query(int node, int low, int high, int l, int r){//l,r is to compare whether the range lies or not between low and high[index of nodes]

    //base case -> completely lies
    if(low >= l && high <= r){
        return tree[node];
    }

    if(high < l || low > r){
        pair<int,int> p;
        p.first = 1e9+10;
        p.second = -1;
        return p;
    }//high is less than l that means out of range

    //moving towards the left and right subtree finding the max of them
    int mid = (low + high) / 2;
    pair<int, int> left = query(2 * node , low , mid, l, r );
    pair<int, int> right =query(2 * node + 1, mid + 1, high, l, r );
    
    pair<int,int > q;
    if(left < right){
        q = left;
    }
    else if(right < left){
        q = right;
    }
    else{
        q.first = left.first;
        q.second = left.second + right.second;
    }

    return q;

}

void update(int node, int low, int high, int idx, int val){
    if(low == high){
        tree[node].first = val;
        tree[node].second = 1;
        a[low] = val;
        return;
    }

    int mid = (low + high) / 2;
    if(idx <= mid){
        update(2 * node, low, mid, idx, val);
    }
    else{
        update(2 * node + 1, mid + 1, high, idx, val);
    }

    if(tree[2 * node ].first < tree[2 * node + 1].first){
        tree[node].first =tree[2 * node ].first;
        tree[node].second =tree[2 * node ].second;
    }
    else if(tree[2 * node ].first > tree[2 * node + 1].first){
        tree[node].first =tree[2 * node + 1].first;
        tree[node].second =tree[2 * node + 1].second;
    }
    else{
        tree[node].first=tree[2 * node].first;
        tree[node].second = tree[2 * node ].second + tree[2 * node + 1].second;
    }
    
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    build(1, 0, n-1);// (index of root, start index, ending index of range)//one based indexing
    
    
    while (m--)
    {
        int type;
        cin >> type ;
        if(type  == 2){
            int l, r; cin >> l >> r;
            pair<int,int> ans =query(1, 0, n - 1, l, r-1);
            cout << ans.first << " " << ans.second << endl;
        }
        else{
            int idx, val;
            cin >> idx >>val;
            update(1, 0, n - 1, idx, val);
        }
    }
    
}

