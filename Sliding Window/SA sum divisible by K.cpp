// Number of sub array whose sum is divisible by K

#include<bits/stdc++.h>
using namespace std;

int fun(int *a,int n,int k)
{
    int res,s=0;
    map<int,int> m;

    for(int i=0;i<n;++i)
        {
            s+=a[i];
            m[s%k]++;
        }

    auto it=m.begin();
    res=it->second;
    for(it=m.begin();it!=m.end();++it){
        int x= it->second;
        res+= x*(x-1)/2;
    }
    return res;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int r=fun(a,n,k);
    cout<<r;
    return 0;
}
