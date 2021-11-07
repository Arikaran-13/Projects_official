#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
    cin>>a>>b>>c;
    if(a>b && a>c){
        if(b>=c){
            cout<<b;
        }
        else {
            cout<<c;
        }
    }
    if(b>a && b>c){
        if(a>=c){
            cout<<a;
        }
        else {
            cout<<c;
        }
    }
    if(c>a && c>b){
        if(a>=b){
            cout<<a;
        }
        else {
            cout<<b;
        }
    }
    }
    return 0;
}