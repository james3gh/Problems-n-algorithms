#include<bits/stdc++.h>
using namespace std;

void fun(int a[],int n,int k)
{
    int i=0,j=0,r=INT_MIN;
    vector<int> v;
    while(j<n)
    {
        r=max(r,a[j]);
        if(j-i+1<k)
        ++j;
        else if(j-i+1==k)
        {
           v.push_back(r);
           if(a[i]==r)
            r=a[i+1];
           ++i,++j;
        }
    }
    for(i=0;i<v.size();++i)
        cout<<v[i]<<" ";
}
int main()
{
    int n,k,i; cin>>n>>k;
    int a[n];
    for(i=0;i<n;++i)  cin>>a[i];
    fun(a,n,k);
    return 0;
}
