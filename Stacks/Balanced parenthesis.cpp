#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool bp(string s){

    stack<char> st;
    for(char c:s){
        if(c=='[' || c=='{' || c=='(')
            st.push(c);
        else if(st.size()!=0){

            if(c==']'){
                if(st.top()=='[')
                    st.pop();
                else
                    return false;  }

             if(c=='}'){
                if(st.top()=='{')
                    st.pop();
                else
                    return false;  }

             if(c==')'){
                if(st.top()=='(')
                    st.pop();
                else
                    return false;  }
        }
    }

    if(st.size()!=0)
        return false;
    else
        return true;

}

int main(){

    string s;
    cin>>s;
    bool ans = bp(s);
    cout<<ans;

return 0;
}
