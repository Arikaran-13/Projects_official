#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k ,i,tc; cin>>tc;
    while(tc-->0){ 
    cin>>n>>k; vector<int>v(n);
    for(i=1;i<=n;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    int j=v[k],count=0;
    for(i=1;i<=n;i++){
        if(v[i]>=j) count++;
    }
    cout<<count<<endl;
    }
    return 0;
    
}