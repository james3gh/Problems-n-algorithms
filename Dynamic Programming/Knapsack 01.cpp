#include<bits/stdc++.h>
using namespace std;

/*
int knapsack(int wt[],int v[],int w,int n)
{
    if(n==0 || w==0)
        return 0;
    else if(w>=wt[n-1])
        return max(v[n-1]+knapsack(wt,v,w-wt[n-1],n-1),knapsack(wt,v,w,n-1));
    else if(w<wt[n-1])
        return knapsack(wt,v,w,n-1);
    }
int main()
{
    int n,w,i;
    cin>>n>>w;
    int wt[n],v[n];
    for(i=0;i<n;++i)
        cin>>wt[i];
     for(i=0;i<n;++i)
        cin>>v[i];
    int ans=knapsack(wt,v,w,n);
    cout<<ans;
    return 0;
}

*/

int main()
{
    int n,w,i,j;
    cin>>n>>w;
    int wt[n],v[n];
    for(i=0;i<n;++i)
        cin>>wt[i];
     for(i=0;i<n;++i)
        cin>>v[i];
    int t[n+1][w+1];
     for(i=0;i<n+1;++i)
     {
         for(j=0;j<w+1;++j)
         {
              if(i==0 || j==0)
              t[i][j]=0;
              else if(wt[i-1]<=j)
              t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
              else
              t[i][j]=t[i-1][j];
         }
     }
    cout<<t[n][w]<<endl;
    return 0;
}

