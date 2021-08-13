//Compare ith element with (i+1)th element

#include<bits/stdc++.h>
using namespace std;

void bs(int a[],int n)
{
    int i,j,flag;
    for(j=1;j<n;++j)        // n-1 passes
    {
        flag=0;         // if array is sorted after some kth pass then no use of running over the loop
    for(i=0;i<n-j;++i)      // as last element will be sorted after every pass
    {

        if(a[i]>a[i+1])
         {
            swap(a[i],a[i+1]);
            flag=1;
         }

    }
    if(flag==0)
        break;
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
    bs(a,n);
    return 0;
}
