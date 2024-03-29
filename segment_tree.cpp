#include <bits/stdc++.h>
using namespace std;
int a[100005], tree[4 * 100005];

void build(int node, int low, int high){

    //if returns bactracking will be execute 
    if(low == high){
        tree[node] = a[low];
        return;
    }

    //if doesn't match the base case execution starts from here
    int mid=(low + high) / 2;
    build(2 * node, low, mid);//(2 * 1 , 1 , 4) [for 1 to 8]
    build(2 * node + 1, mid + 1, high);//(2 * 1 + 1, 5 , 8) [for 3 to 8]

    //backtracking
    tree[node] = tree[2 * node] + tree[2 * node + 1]; 

}

int query(int node, int low, int high, int l, int r){//l,r is to compare whether the range lies or not between low and high[index of nodes]

    //base case -> completely lies
    if(low >= l && high <= r){
        return tree[node];
    }

    if(high < l || low > r) return 0;//high is less than l that means out of range

    //moving towards the left and right subtree finding the sum of them
    int mid = (low + high) / 2;
    int left = query(2 * node, low , mid, l, r);
    int right =query(2 * node + 1, mid + 1, high, l, r);
    return left + right;

}

void update(int node, int low, int high, int idx, int val){
    if(low == high){
        tree[node] = val;
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

    tree[node] = (tree[2 * node] + tree[2 * node + 1]); 
} 

int main()
{
    int n ;
    cin >> n;
     int q;
    cin >> q;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    build(1, 1, n);// (index of root, start index, ending index of range)//one based indexing
    
   
    while (q--)
    {
        int type,l, r;
        cin >> type >> l >> r;
        if(type  == 2)
        cout << query(1, 1, n, l+1, r) << endl;
        else{
            update(1, 1, n, l+1, r);
        }
    }
    
}