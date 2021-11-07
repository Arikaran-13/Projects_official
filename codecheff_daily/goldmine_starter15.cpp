#include<iostream>
using namespace std;
void goldmine(){
    int n,x,y; cin>>n>>x>>y;
    if((n+1)*y<x)cout<<"no\n";
    else cout<<"yes\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;
    while(tc-->0){goldmine();}
    return 0;
}