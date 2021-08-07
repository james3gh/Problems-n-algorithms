#include<bits/stdc++.h>
using namespace std;

int fun(string a,string b,int n,int k)
{
    map<char,int> m;
    int c=0,ans=0;
     for(int i=0;i<b.size();++i)
       m[b[i]]++;
       c=m.size();
    int i=0,j=0;
    while(j<n)
    {
       // m[b[i]]++;
       // c=m.size();
       if(a[j]==m[b[j])
        if(j-i+1<k) ++j;
        else if(j-i+1==k)
        {
            if(a[i]==)
        }
    }
}
int main()
{
    int n,k; cin>>n;
    string a,b;
    cin>>a>>b;
    k=b.size();
    cout<<k;
    fun(a,b,n,k);
    return 0;
}
