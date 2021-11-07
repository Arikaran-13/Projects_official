#include<iostream>
using namespace std;
int main(){
    int n,b,i,count=0,k=0,t;
    cin>>t;
   while(t--){
    cin>>n;
     i=0;
    while(n>0){
        count++;
        b=n%10;
        n=n/10;
        if(b == 4)
        i++;
        }
        cout<<i<<endl;
   }
    return 0;
    
    
}