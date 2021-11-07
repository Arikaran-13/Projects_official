#include<iostream>
using namespace std;
void RCB(){
    int x,y,z; cin>>x>>y>>z;
    if(z*2+x>=y)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc; 
    while(tc-->0){RCB();}
    return 0;
}