#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void toh(int n,char a,char b,char c,int &cnt){

    if(n==0)
        return;
    toh(n-1,a,c,b,cnt);
    ++cnt;
    cout<<n<<" disc from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c,cnt);

}

int main(){
    int n;
    cin>>n;
    char start,aux,dest;
    cin>>start>>aux>>dest;
    int c=0;
    toh(n,start,aux,dest,c);
    cout<<c;
    return 0;
}
