// Given a Decreasing sorted array


#include<bits/stdc++.h>
using namespace std;

int rv(int a[],int n,int ele)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    if(a[mid]==ele)
        return mid+1;
    else if(ele<a[mid])
        e=mid-1;
    else
        s =mid+1;
    }
}
int main()
{
    int n,ele; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    cin>>ele;
    cout<<rv(ar,n,ele);
    return 0;
}
