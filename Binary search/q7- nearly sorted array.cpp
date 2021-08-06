// Element can be either at nth or (n-1)th or (n+1)th position

#include<bits/stdc++.h>
using namespace std;

int fo(int a[],int n,int ele)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    if(a[mid]==ele)
        return mid;
    if(mid-1>=s && a[mid-1]==ele)
    return mid-1;
    if(mid+1<=e && a[mid+1]==ele)
    return mid+1;
    if(a[mid]>ele)
        e=mid-2;
    if(a[mid]<ele)
        s=mid+2;
    }
return -2;
}
 int main()
{
    int n,ele; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    cin>>ele;
    int ans=fo(ar,n,ele);
    cout<<ans+1;
    return 0;
}
