//Given a rotated sorted array 

#include<bits/stdc++.h>
using namespace std;

int fo(int a[],int n)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    int nxt,prv;
    nxt=(mid+1)%n; prv=(mid-1+n)%n;
    if(a[mid]<=a[nxt] && a[mid]<=a[prv])
        return mid;
        if(a[mid]<=a[e])
            e=mid-1;
        else if(a[mid]>=a[s])
            s=mid+1;
    }
}

int main()
{
    int n,ele; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    int ans=fo(ar,n);
    cout<<ans;
    return 0;
}
