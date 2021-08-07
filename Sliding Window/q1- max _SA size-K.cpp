#include<bits/stdc++.h>
using namespace std;

int fun1(int a[],int n,int k)
{
    int s=0,s2,i,m;
    for(i=0;i<k;++i)
        s+=a[i];
        m=s;
    for(i=0;i<n-k;++i)
    {
        s2=s-a[i]+a[k+i];
        m=max(m,s2);
        s=s2;
    }
return m;
}

int fun2(int a[],int n,int k)
{
    int i=0,j=0,s=0,mx=INT_MIN;
   while(j<n)
   {
   s+=a[j];
   if(j-i+1<k)  ++j;
   else if(j-i+1==k)
     {
        mx=max(mx,s);
        s=s-a[i];
        ++i,++j;
     }
   }
return mx;
}

int main()
{
    int n,k; cin>>n>>k;
    int a[n],i;

    if(n>=k)
    {
    	for(i=0;i<n;++i) cin>>a[i];
    	cout<<fun2(a,n,k);
    }
    else 
    	cout<<"invalid";

    return 0;
}
