#include<bits/stdc++.h>
using namespace std;

int fun(int a[],int n,int s)
{
    int i=0,j=0,r=INT_MIN,k=0;
    while(j<n)
    {
        k+=a[j];
        if(k<s)
        ++j;
        else if(k==s){
        r=max(r,j-i+1);
        ++j;
        }
        if(k>s)
        {
            while(k>s)
              k=k-a[i],  ++i;
              ++j;
        }
    }
    return r;
}
int main()
{
    int n,s,i; cin>>n>>s;
    int a[n];
    for(i=0;i<n;++i)  cin>>a[i];
    int ans=fun(a,n,s);
    cout<<ans;
    return 0;
}
