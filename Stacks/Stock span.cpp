#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve_stack(int a[],int n)
{
    vector<int> v;
    stack<pair<int,int>> s;
    int i;
    for(i=0;i<n;++i)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(a[i]<s.top().first)
            v.push_back(s.top().second);
        else{
            while(s.size()!=0 && s.top().first<a[i])
                 s.pop();
                 if(s.size()==0)
                    v.push_back(-1);
                else
                    v.push_back(s.top().second);
            }
        s.push(make_pair(a[i],i));
    }
    for(i=0;i<v.size();++i)
        cout<<i-v[i]<<" ";
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    solve_stack(a,n);
    return 0;

}
