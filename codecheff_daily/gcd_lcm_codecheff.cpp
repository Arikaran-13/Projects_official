#include<iostream>
using namespace std;
int gcd(int a,int b){
if(a==0) return b;
  return gcd(b%a,a);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc ; cin>>tc;
    while(tc--){
    int a,b; cin>>a>>b;
    int k=gcd(a,b); cout<<k;
    int j=lcm(a,b); cout<<" "<<j<<"\n";
    }
    return 0;
}