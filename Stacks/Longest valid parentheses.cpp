#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int lvp(string s)
{
        stack<int> st;
        st.push(-1);
        int ans=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='(')
                st.push(i);
            else{
                st.pop();
                if(st.size()!=0)
                    ans=max(ans,i-st.top());
                else
                    st.push(i);
            }
        }
    return ans;
}


int main()
{
    string s;
    cin>>s;
    int ans = lvp(s);
    cout<<ans;
    return 0;
}
