#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n, int key)
{
    int mid,e,s;
    e=n;
    s=0;
    while(s <= e)
    {
        mid=(s+e)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}


int main()
{
    int n,i,j;

    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin>>j;

    sort(a,a+n);

    cout<<binarysearch(a,n,j)<<endl;
    return 0;
}
