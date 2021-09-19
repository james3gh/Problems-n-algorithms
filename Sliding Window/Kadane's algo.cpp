#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int KA(int a[],int n)
{
    int sum=0,i,mx=a[0];
    for(i=0;i<n;++i){
        sum+=a[i];
        if(sum>mx)
            mx=sum;
        if(sum<0)
            sum=0;
    }
    return mx;
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;++i)
    cin>>a[i];
   int ans= KA(a,n);
   cout<<ans;
return 0;
}
