#include<iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc-->0)
    {
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<">"<<endl;
    }
    else if(a<b){
        cout<<"<"<<endl;
    }
    else {
        cout<<"="<<endl;
    }
    }
    return 0;
}