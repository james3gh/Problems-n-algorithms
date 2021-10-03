#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int last(int a[],int n,int key,int idx)
{
        if(idx==n)
            return -1;
        int v = last(a,n,key,idx+1);
            if(v==-1)
            {
                if(a[idx]==key)
                    return idx;
                else
                    return v;
            }
            else{
                return v;
            }
}

int first(int a[],int n,int key,int idx)
{
        if(idx==n)
            return -1;
        if(a[idx]==key)
            return idx;
        int v = first(a,n,key,idx+1);
            return v;
}

static vector<int> total_cnt(int a[],int n,int key,int idx)
{
        static vector<int> ans;
        if(idx==n)
            return ans;
        if(a[idx]==key)
            ans.push_back(idx);
        ans = total_cnt(a,n,key,idx+1);
            return ans;
}

int main()
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    cin>>key;
    cout<<first(a,n,key,0)<<endl;
    cout<<last(a,n,key,0)<<endl;
    vector<int> res = total_cnt(a,n,key,0);
    for(int i:res)
        cout<<i<<" ";
    return 0;
}
