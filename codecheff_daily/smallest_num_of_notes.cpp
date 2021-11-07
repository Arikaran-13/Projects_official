#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n,i,ans=0,tc; cin>>tc;
    while(tc-->0){
    ans=0;
    cin>>n;
    vector<int>v={1,2,5,10,50,100};
    for(i=5;i>=0;i--){
        //if(n%v[i]==0){
            ans+=n/v[i];
            n=n%v[i];
        //}

    }
    cout<<ans<<endl;
    }
    return 0;

}