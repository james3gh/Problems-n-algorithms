#include<bits/stdc++.h>
using namespace std;

 int fun(int arr[], int N)
    {
        int i=0,sum=0,r=0;

        for(i=0;i<N;++i)
        if(arr[i]==0)
        arr[i]=-1;

    i=0;
    unordered_map<int,int> m;
        while(i<N)
    {
        sum+=arr[i];
        if(sum==0)
            r=i+1;
        else
        {
            if(m.find(sum)!=m.end())
                r=max(r,i-m[sum]);
            else
                m[sum]=i;
        }
        ++i;
    }
    return r;
    }

int main()
{
    int n,s,i; cin>>n>>s;
    int a[n];
    for(i=0;i<n;++i)  cin>>a[i];
    int ans=fun(a,n);
    cout<<ans;
    return 0;
}
