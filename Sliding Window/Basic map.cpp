#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<char,int> m;
  /*  for(char i:s)   m[i]++;
    for(char i:s)
    {
        if(m[i]!=0)
            cout<<i<<m[i]<<" ", m[i]=0;
    }   */



    for(int i=0;i<s.size();++i)
        m[s[i]]++;
    cout<<m.size()<<endl;
   for(auto i=m.begin();i!=m.end();++i)
        cout<<i->first<<":"<<i->second<<endl;
         m[s[0]]--;
      m[s[1]]--;
         m[s[2]]--;
          m[s[3]]--;

                if(m[s[1]]==0)
                    m.erase(s[1]);
                    cout<<m.size();
      //  cout<<m['a'];



   /*  map<char,int>::iterator it;
      for(int i=0;i<s.size();++i)
        m[s[i]]++;
     for(it=m.begin();it!=m.end();++it)
        cout<<it->first<<":"<<it->second<<endl;
    */

    return 0;
}
