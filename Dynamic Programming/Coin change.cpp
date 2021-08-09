#include<bits/stdc++.h>
using namespace std;

/*

int main()
{
    int n,s,i,j;
    cin>>n>>s;
    int c[n];
    for(i=0;i<n;++i)
        cin>>c[i];

 // count the number of ways to have the sum of s by the given coins

      int t[n+1][s+1];
      for(i=0;i<s+1;++i)
        t[0][i]=0;
      for(i=0;i<n+1;++i)
         t[i][0]=1;
     for(i=1;i<n+1;++i)
     {
         for(j=1;j<s+1;++j)
         {
              if(c[i-1]<=j)
              t[i][j] = t[i][j-c[i-1]] + t[i-1][j] ;
              else
              t[i][j]=t[i-1][j];
         }
     }
     cout<<t[n][s]<<endl;
    return 0;
}

*/

    int main()
{
    int n,s,i,j;
    cin>>n>>s;
    int c[n];
    for(i=0;i<n;++i)
        cin>>c[i];

 // minimum number of coins

 int t[n+1][s+1];
      for(i=0;i<s+1;++i)
        t[0][i]=INT_MAX-1;
      for(i=0;i<n+1;++i)
         t[i][0]=0;
     for(i=1;i<n+1;++i)
     {
         for(j=1;j<s+1;++j)
         {
              if(c[i-1]<=j)
              t[i][j] = min(t[i][j-c[i-1]]+1 , t[i-1][j]);
              else
              t[i][j]=t[i-1][j];
         }
     }
     if(t[n][s]==INT_MAX-1)
        cout<<"-1"<<endl;
     else
     cout<<t[n][s]<<endl;
     return 0;
}
