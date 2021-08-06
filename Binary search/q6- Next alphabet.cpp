#include<bits/stdc++.h>
using namespace std;

int na(char a[],int n,char ele)
{
    int s=0,e=n-1,mid;
    char ceil=0;
    while(s<=e)
    {
    mid=(e-s)/2 + s;
    if(a[mid]==ele)
        return a[mid+1];
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
    int n; cin>>n;
    char ar[n],ele;
    for(int i=0;i<n;++i)  cin>>ar[i];
    cin>>ele;
     char c=na(ar,n,ele);
    cout<<c;
    return 0;
}
