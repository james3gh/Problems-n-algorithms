#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string x,y;
    cin>>x>>y;
    int m=x.length(),n=y.length(),i,j;
    int t[m+1][n+1];
    for(i=0;i<m+1;++i){
    for(j=0;j<n+1;++j){
    if(i==0 || j==0)
    t [i][j]=0;
    else  if(x[i-1] == y[j-1])
        t[i][j]=1+t[i-1][j-1];

    else
        t[i][j]=max(t[i][j-1],t[i-1][j]);
    }}
     //cout<<t[m][n]<<endl;
     cout<<"minimum number of deletions are "<<m-t[m][n]<<endl;
      cout<<"minimum number of insertions are "<<n-t[m][n]<<endl;
    return 0;
}
