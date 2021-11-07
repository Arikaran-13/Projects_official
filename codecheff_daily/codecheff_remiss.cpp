#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc-->0){
        int a;
        int b;
        cin>>a>>b;
     int maxie=max(a,b);
     cout<<maxie<<" ";
       // cout<<a<<" ";
        cout<<a+b;
    }
    return 0;
}