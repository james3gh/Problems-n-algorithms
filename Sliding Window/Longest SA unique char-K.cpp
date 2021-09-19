#include<bits/stdc++.h>
using namespace std;

int fun(string s,int n,int k)
{
    int i=0,j=0,r=INT_MIN;
    map<char,int> m;
    while(j<n)
    {
        m[s[j]]++;
        if(m.size()<k)
            ++j;
        else if(m.size()==k)
        {
            r=max(r,j-i+1);
            ++j;
        }
        else if(m.size()>k)
        {
            while(m.size()>k)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                m.erase(s[i]);
                ++i;
            }

            ++j;
        }
    }
    return r;
}
int main()
{
    string s;
    int k;
    cin>>s>>k;
    int n=s.size();
    int r=fun(s,n,k);
    cout<<r;
    return 0;
}
