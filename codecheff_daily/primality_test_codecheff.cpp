#include<iostream>
using namespace std;
void checkprime(){
    int n,i; cin>>n;
   int count=0;
    for(i=1;i<=n;i++){
        if(n%i==0){count++;}
    }
    if(count==2)cout<<"yes\n";
    else cout<<"no\n";
    }
int main(){
    int tc; cin>>tc;
    while(tc-->0){ checkprime();}
    return 0;
}