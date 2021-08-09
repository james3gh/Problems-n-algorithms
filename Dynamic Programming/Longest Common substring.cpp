#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string x,y;
    int c=0;
    cin>>x>>y;
    int m=x.length(),n=y.length(),i,j;
    int t[m+1][n+1];
    for(i=0;i<m+1;++i)
    t[i][0]=0;
     for(i=0;i<n+1;++i)
    t[0][i]=0;
     for(i=1;i<m+1;++i){
        for(j=1;j<n+1;++j){
     if(x[i-1] == y[j-1]){
        t[i][j]=1+ t[i-1][j-1];
        if(t[i][j]>c)
            c=t[i][j];
     }
    else
        t[i][j]=0;//max(t[i][j-1],t[i-1][j]);
    }}
     cout<<c<<endl;
    return 0;
}
