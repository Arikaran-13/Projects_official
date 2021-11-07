#include<iostream>
using namespace std;
int main(){
    int n,i,t;
    long long fact=1;
    cin>>t;
    while(t--){
    cin>>n;
    fact=1;
    for(i=n;i>=1;i--){
        fact *= i;
    }
    cout<<fact<<endl;
    }
    return 0;
}