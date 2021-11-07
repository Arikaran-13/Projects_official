#include<iostream>
#include<vector>
using namespace std;
int findgcd(int a,int b){
    if(a==0)return b;
    return findgcd(b%a,a);
}
int main(){
    
   int tc; cin>>tc;
   while(tc-->0){
    int n,i,j,gcd; cin>>n; vector<int>v(n);
    gcd=v[0];
    for(i=1;i<=n;i++)cin>>v[i];
    for(j=1;j<=n;j++){
        gcd=findgcd(v[j],gcd);
    }
    for(i=1;i<=n;i++){
        v[i]=v[i]/gcd;
    }
    for(i=1;i<=n;i++)cout<<v[i]<<" ";
    cout<<"\n";
   }
    return 0;
}