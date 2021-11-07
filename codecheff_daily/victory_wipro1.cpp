#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,f,s; cin>>n;
    vector<int> v(n,1);
    vector<int>b(n,0);
    for(i=0;i<n;i++) cin>>v[i];
    for(i=0;i<n;i++){
        
        b[i]=v[i] * v[i-1];
        if(b[i-1] <b[i]) {
            f=v[i-1]; s=v[i];
        }
        
    }
    int res=f*s;
    cout<<res;
}