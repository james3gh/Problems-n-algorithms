#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin>>q;
    stack<int> s,ss;
    int ch,a;
    while(q--)
    {
    cin>>ch;
    if(ch==1)
       {
           cin>>a ; s.push(a);
           if(ss.size()==0)
            ss.push(a);
           else if(ss.top()<=a)
            ss.push(a);
       }
    else if(ch==2)
    {
         if(ss.top()==s.top())
            ss.pop();
         s.pop();
    }
    else
        cout<<ss.top()<<endl;

    }

    return 0;

}
