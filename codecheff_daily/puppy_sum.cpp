#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin>>tc;
    while(tc--){
    int k,n,add=0,c=0; cin>>k>>n;
    while(k--){
        add=0;
      for(int i=1;i<=n;i++)add+=i; c++;
      if(k==0){
      cout<<add<<"\n";
      }
      n=add;
    }
    }
return 0;
}