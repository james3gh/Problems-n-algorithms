// example
// 7 3
// 9 3 5 1 2 0 7
// result 9 5 5 2 7
#include<bits/stdc++.h>
using namespace std;

void fun(int a[],int n,int k)
{
    int i=0,j=0,r=INT_MIN;
    deque<int> v;
    vector<int> ans;
    while(j<n)
    {
        while(v.size()!=0 && v.back()<a[j])
            v.pop_back();
        v.push_back(a[j]);
        if(j-i+1<k)
        ++j;
        else if((j-i+1)==k)
        {
           ans.push_back(v.front());
                if(v.front()==a[i])
                    v.pop_front();
           ++i,++j;
        }
    }
    for(i=0;i<ans.size();++i)
        cout<<ans[i]<<" ";
}
int main()
{
    int n,k,i; cin>>n>>k;
    int a[n];
    for(i=0;i<n;++i)  cin>>a[i];
    fun(a,n,k);
    return 0;
}
