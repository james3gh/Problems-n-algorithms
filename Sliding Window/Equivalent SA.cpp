// Count the total number of sub-array having total distinct elements same
// as that of total distinct elements of the original array.
#include<bits/stdc++.h>
using namespace std;

int esa(int arr[], int n)
{
        unordered_map<int,int> m;
        for(int i=0;i<n;++i)
        m[arr[i]]++;
        int k=m.size();
        m.clear();
        int j=0,i=0,c=0;
        while(j<n){

            m[arr[j]]++;
            if(m.size()<k)
            ++j;

            else if(m.size()==k){
                    while(m.size()==k){
                        c += n-j;
                    if(m[arr[i]]==1)
                        m.erase(arr[i]);
                    else
                        m[arr[i]]--;
                    ++i;
                    }
                ++j;
                }
        }
        return c;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int r=esa(a,n);
    cout<<r;
    return 0;
}
