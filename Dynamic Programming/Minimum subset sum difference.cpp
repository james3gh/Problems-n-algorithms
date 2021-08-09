#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s=0,r=INT_MAX;
    vector <int> v;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i],s+=a[i];
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
     for(i=0;i<(s+1)/2;++i)
     {
         if(t[n][i]==1)
         {
              v.push_back(i);
         }
     }
     for(i=0;i<v.size();++i)
          r=min(r,s-2*v[i]);
    cout<<r<<endl;
    return 0;
}
