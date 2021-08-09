#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string x,y;
    cin>>x;
    y=x;
    int m=x.length(),i,j;
     reverse(y.begin(),y.end());
    int t[m+1][m+1];
    for(i=0;i<m+1;++i){
    for(j=0;j<m+1;++j){
    if(i==0 || j==0)
    t [i][j]=0;
    else  if(x[i-1] == y[j-1])
        t[i][j]=1+t[i-1][j-1];

    else
        t[i][j]=max(t[i][j-1],t[i-1][j]);
    }}
     cout<<t[m][m]<<endl;
    return 0;
}
