
#include<bits/stdc++.h>
using namespace std;
void maxpoints(){
    int n,i,a,b,count=0,count1=0; cin>>n>>a>>b; vector<int>v;
  auto max= *max_element(v.begin(),v.end());
  
    for(i=2;i<=n;i++)if(n%i==0)v.push_back(i);
   for(auto x: v){
       if(n>1){
       if(x%2==0){
           count+=a;
           n=n/x;
       }
       else{
           count+=b;
           n=n/x;
       }
       }
   }
   cout<<count;
}
int main()
{
    int tc; cin>>tc;
    while(tc-->0){maxpoints();}
    return 0;
}