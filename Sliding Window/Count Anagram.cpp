#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int ca(string s,string auxs){
        map<char,int> m;
        int i,ans=0,c,j;
        int k=auxs.size();
        for(i=0;i<k;++i)
            m[auxs[i]]++;
        c=m.size();
        i=0,j=0;
        while(j<s.size()){
            if(m.find(s[j])!=m.end()){
                if(m[s[j]]==1)
                  c--;
                m[s[j]]--;
            }
            if((j-i+1)<k)
                ++j;
            else if((j-i+1)==k){
                if(c==0)
                    ans++;
                if(m.find(s[i])!=m.end()){
                    if(m[s[i]]==0)
                        ++c;
                   m[s[i]]++;
                }
                 ++i,++j;
            }
        }
    return ans;

}

int main(){
   string s,auxs;
   cin>>s;
   cin>>auxs;
   int ans= ca(s,auxs);
   cout<<ans;
return 0;
}
