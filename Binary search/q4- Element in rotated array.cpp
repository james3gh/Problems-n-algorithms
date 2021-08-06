// Search an element in a rotated sorted array

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
int bs(int a[],int n,int ele,int s,int e)
{
     while(s<=e)
    {
    int mid=(e-s)/2 + s;
    if(a[mid]==ele)
        return mid;
        else if (a[mid]<ele)
            s=mid+1;
        else
            e=mid-1;
}
return -1;
}

int main()
{
    int n,ele; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    cin>>ele;
    int ans=fo(ar,n);
    int r=bs(ar,n,ele,0,ans-1);
    if(r==-1)
    cout<<bs(ar,n,ele,ans,n-1);
    else
    cout<<bs(ar,n,ele,0,ans-1);
    return 0;
}
