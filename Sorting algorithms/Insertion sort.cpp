// kth element is compared with all its previous elements  (1<=k<=n)

#include<bits/stdc++.h>
using namespace std;

void is(int a[],int n)
{
    int temp,i,j;
    for(i=1;i<n;++i)
    {
        temp=a[i];
        j=i-1;
    while(j>=0 && a[j]>temp)
      {
          a[j+1]=a[j];
          --j;
      }
      a[j+1]=temp;
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
    is(a,n);
    return 0;
}
