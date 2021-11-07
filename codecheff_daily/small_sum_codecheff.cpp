#include<bits/stdc++.h>
using namespace std;
void smallsum(){

    int n,i; cin>>n;
    vector<int>v(n); for( i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[0]+v[1]<<"\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;
    while(tc-->0){smallsum();}
    return 0;
}