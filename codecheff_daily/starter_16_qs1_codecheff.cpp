#include<iostream>
using namespace std;
void chefresult(){
    int n,x,p,tt; cin>>n>>x>>p;
    tt=(n-x)*-1 + (x*3);
    if(tt>=p)cout<<"PASS\n";
    else cout<<"FAIL\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;
    while(tc-->0)chefresult();
    return 0;
}
