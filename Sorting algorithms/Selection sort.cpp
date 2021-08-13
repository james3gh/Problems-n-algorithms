// select the min element in the array and place it in the approp. position

#include<bits/stdc++.h>
using namespace std;

void ss(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;++i)
    {
        int imin=i;
        for(j=i+1;j<n;++j)
        {
            if(a[j]<a[imin])
            imin=j;
        }
        swap(a[imin],a[i]);
    }
     for(i=0;i<n;++i)
        cout<<a[i]<<endl;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    ss(a,n);
    return 0;
}
