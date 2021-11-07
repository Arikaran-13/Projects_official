#include<iostream>
#include<vector>
using namespace std;
void cutoutbuild(){
    long long n,k,i,count=0; cin>>n>>k; vector<int>v(n);
    for(i=0;i<n;i++) cin>>v[i];
    for(i=0;i<n;i++) if(v[i]>=k)count++; cout<<count<<"\n";
}
int main(){
    int tc; cin>>tc;
    while(tc-->0){cutoutbuild();}
    return 0;
}