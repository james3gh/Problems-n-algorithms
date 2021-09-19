#include<bits/stdc++.h>
using namespace std;

int fun(string s,int n)
{
    int i=0,j=0,r=INT_MIN;
    map<char,int> m;
    while(j<n)
    {
        m[s[j]]++;
        int c=m.size();
        if(c<=2){
            r=max(r,j-i+1);
            ++j;
        }
        else if(c>2)
        {
            while(c>2)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                m.erase(s[i]),c--;
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
    cin>>s;
    int n=s.size();
    int r=fun(s,n);
    cout<<r;
    return 0;
}
