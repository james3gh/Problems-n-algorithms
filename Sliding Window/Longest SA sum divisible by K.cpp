// Longest sub array whose sum is divisible by K

#include<bits/stdc++.h>
using namespace std;

int fun(int *a,int n,int k)
{
    int res=0,sum=0,ans=-1;
    unordered_map<int,int> m;
    for(int i=0;i<n;++i)
        {
            sum+=arr[i];
            int c = ((sum%k) + k)%k;
            if(c==0)
            res=i+1;
            else if(c!=0){
                if(m.find(c)==m.end())
                    m[c]=i;
                else if(m.find(c)!=m.end()){
                auto it=m.find(c);
                res=i- it->second;
                }
            }
            ans=max(ans,res);
    	}
    	return ans;
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
