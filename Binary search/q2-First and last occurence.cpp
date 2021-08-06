// Given a Non-decreasing array  

#include<bits/stdc++.h>
using namespace std;

int fo(int a[],int n,int ele)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    if(a[mid]==ele)
        e=mid-1;            //  for first occurence
                            //  for last occurence ---- s=mid+1
    else if(ele>a[mid])
        s=mid+1;
    else
        e=mid-1;
    }
    return mid+1;
}

int main()
{
    int n,ele; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    cin>>ele;
    int ans=fo(ar,n,ele);
    cout<<ans;
    return 0;
}
