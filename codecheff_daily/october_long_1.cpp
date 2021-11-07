#include<iostream>
using namespace std;
int main(){
    int a,b,tc; cin>>tc;
    while(tc-->0){
     cin>>a>>b;
    if(a>0 && b>0) cout<<"Solution"<<endl;
    else if(a>0) cout<<"Solid"<<endl;
    else cout<<"Liquid"<<endl;
    }
    return 0;

}