#include<iostream>
using namespace std;
void ans(){
    int x,y,a,b,k,p_rs,d_rs; cin>>x>>y>>a>>b>>k;
    p_rs=(k*a)+(x); d_rs=(k*b)+(y);
    if(p_rs<d_rs) cout<<"PETROL\n";  
    else if(p_rs==d_rs) cout<<"SAME PRICE\n";
    else cout<<"DIESEL\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc; while(tc-->0)ans();
}