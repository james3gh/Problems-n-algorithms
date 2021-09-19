#include<bits/stdc++.h>
using namespace std;

int largestSizeSA(int a[],int n,int k)
{
    int j=0,res=0,sum=0;
    unordered_map<int ,int> m;
        while(j<N){
            sum+=A[j];
            if(sum==K)
                res=j+1;
            if (m.find(sum) == m.end())
            m[sum] = j;
            if(m.find(sum-K)!=m.end())
                {
                if (res < (j - m[sum - K]))
                res = j - m[sum - K];
                }
            ++j;
        }
    return res;
}

int countSA(int a[],int n,int k)
{
    unordered_map<int,int> m;
    int i=0,sum=0,c=0;
    while(i<n){
        sum+=a[i];
        if(sum==k)
            c++;
        if(m.find(sum-k)!=m.end())
            c+=m[sum-k];
        m[sum]++;
        ++i;
    }
    return c;
}

int main()
{
    int n,k,i; cin>>n>>k;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    int ans1=countSA(a,n,k);                    // Count sub-array having sum K
    int ans2=largestSizeSA(a,n,k);              // Longest sub-array having sum k
    cout<<ans1<<" "<<ans2;
    return 0;
}
