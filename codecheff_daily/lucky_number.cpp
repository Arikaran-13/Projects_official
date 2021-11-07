#include<iostream>
#include<vector>
using namespace std;
void chefwin(){
    int a,b,c,flag=0; vector<int>v; cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c); for(int i=0;i<v.size();i++){
        if(v[i]==7)flag=1;
    }
    if(flag==1)cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
  int tc; cin>>tc;
  while(tc-->0){chefwin();}
  return 0;
}