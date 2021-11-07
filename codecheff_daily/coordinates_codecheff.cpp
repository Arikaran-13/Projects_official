#include<iostream>
using namespace std;
void coordinates(){
    long long int x,y; cin>>x>>y;
    if(abs(x+y)%2==0)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    long int tc; cin>>tc;
    while(tc-->0){coordinates();}
    return 0;
}