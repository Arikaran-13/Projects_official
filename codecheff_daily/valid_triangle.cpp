#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc-->0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c==180){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}