#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

int i,count=0,n,k,tc; cin>>tc;
while(tc-->0){

cin>>n>>k;
vector<int>v(n);

for(i=0;i<n;i++) cin>>v[i];
auto j=max_element(v.begin(),v.end());
vector<int>b(n,*j);

for(i=0;i<n;i++){
    while(v[i] != *j){
    if(v[i] != *j){
        v[i]++;
        count++;
    }
    }
}
    if(count==k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}