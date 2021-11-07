#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,ans,n; cin>>n;
    vector<int> v(n,0);
    for(i=1;i<=n;i++) cin>>v[i];
    for(i=1;i<=n;i++){
        ans=max(ans,v[i] * v[i-1]);
    }
    cout<<ans;
    return 0;
}