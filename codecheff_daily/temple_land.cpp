#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc-->0){
    int n; cin>>n;
    vector<int>v(n); for(int i=0;i<n;i++) cin>>v[i];
    bool ans=true;
    if(n%2==0)ans=false;
    else{
    if(v[0]!=1 && v[n-1]!=1)ans=false; 
    for(int i=0;i<n;i++){
        if(abs(v[i]-v[i+1])!=1) ans=false;
    }
    }
if(ans)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
    }
return 0;
}