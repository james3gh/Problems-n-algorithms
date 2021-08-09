#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,j;
    cin>>n;
    int p[n];
    for(i=0;i<n;++i)
        cin>>p[i];
     int t[n+1][n+1];
      for(i=0;i<n+1;++i)
        t[0][i]=0;
      for(i=0;i<n+1;++i)
         t[i][0]=0;
     for(i=1;i<n+1;++i)
     {
         for(j=1;j<n+1;++j)
         {
              if(i<=j)
              t[i][j] = max(p[i-1]+ t[i][j-i],t[i-1][j]);
              else
              t[i][j]=t[i-1][j];
         }
     }
     cout<<t[n][n]<<endl;
    return 0;
}
