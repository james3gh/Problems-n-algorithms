#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void insert_temp(vector<int> &v,int temp)
{
    if(v.size()==0 || v[v.size()-1]<=temp)
       {
           v.push_back(temp);
           return;
       }
    int val = v[v.size()-1];
    v.pop_back();
    insert_temp(v,temp);
    v.push_back(val);
    return;
}

void sortArray(vector<int> &v)
{
   if(v.size()==1)
        return;
   int temp=v[v.size()-1];
    v.pop_back();
   sortArray(v);
   insert_temp(v,temp);
}

int main()
{
    int n;
    cin>>n;
    int x;
    vector<int> v;
    for(int i=0;i<n;++i){
        cin>>x;
        v.push_back(x);
    }
    sortArray(v);
    for(int i:v)
        cout<<i<<" ";
    return 0;
}
