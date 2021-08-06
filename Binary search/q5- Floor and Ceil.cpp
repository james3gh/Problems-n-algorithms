// Given an Increaing sorted array 

#include<bits/stdc++.h>
using namespace std;
int floor(int a[],int n,int ele)
{
    int s=0,e=n-1,mid;
    int floor=0;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    if(a[mid]==ele)
        return a[mid];
    else if(a[mid]>ele)
        e=mid-1;
    else if(a[mid]<ele)
    {
        s=mid+1;
        floor=a[mid];
    }
}
 return floor;
}

int ceil(int a[],int n,int ele)
{
    int s=0,e=n-1,mid;
    int ceil=0;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    if(a[mid]==ele)
        return a[mid];
    else if(a[mid]>ele)
    {
        e=mid-1;
        ceil=a[mid];
    }
    else if(a[mid]<ele)
        s=mid+1;
}
 return ceil;
}
int main()
{
    int n,ele; cin>>n;
    int ar[n];
    for(int i=0;i<n;++i)  cin>>ar[i];
    cin>>ele;
    int f=floor(ar,n,ele);
     int c=ceil(ar,n,ele);
    cout<<"floor is "<<f<<" and ceil is "<<c<<endl;
    if(abs(f-ele)>=abs(c-ele))
    cout<<"minimum diff is from "<<c;
    else
     cout<<"minimum diff is from "<<f;
    return 0;
}
