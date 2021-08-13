#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve_stack(int a[],int n)
{
    vector<int> v;
    stack<int> s;
    int i;
    for(i=n-1;i>=0;--i)
    {
        if(s.size()==0)
            v.push_back(-1);
        else if(a[i]<s.top())
            v.push_back(s.top());
        else{
            while(s.size()!=0 && s.top()<=a[i])
                 s.pop();
                 if(s.size()==0)
                    v.push_back(-1);
                 else
                    v.push_back(s.top());
            }
        s.push(a[i]);
    }
    for(i=v.size()-1;i>=0;--i)
        cout<<v[i]<<" ";
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
