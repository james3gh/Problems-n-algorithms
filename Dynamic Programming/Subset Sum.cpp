#include<bits/stdc++.h>
using namespace std;

/*
int s_sum(int a[],int s,int n)
{
    if(n==0)
        return 0;
    if(s==0)
        return 1;
    else if(s>=a[n-1])
        return (s_sum(a,s-a[n-1],n-1) || s_sum(a,s,n-1));
    else if(s<a[n-1])
        return s_sum(a,s,n-1);
    }
int main()
{
    int n,s,i;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    int ans=s_sum(a,s,n);
    cout<<ans;
    return 0;
}
*/

int main()
{
    int n,s,i,j;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    int t[n+1][s+1];

      for(i=0;i<s+1;++i)
        t[0][i]=0;
      for(i=0;i<n+1;++i)
         t[i][0]=1;
     for(i=1;i<n+1;++i)
     {
         for(j=1;j<s+1;++j)
         {
              if(a[i-1]<=j)
              t[i][j] = (t[i-1][j-a[i-1]] || t[i-1][j]);
              else
              t[i][j]=t[i-1][j];
         }
     }
    cout<<t[n][s]<<endl;
    return 0;
}


