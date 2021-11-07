#include<iostream>
using namespace std;
int main(){
    int n,t;
    long rem,rev;
    cin>>t;
    while(t--){
        
    
    cin>>n;
    int i=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
             
    }
    cout<<rev;
    rev=0;
    
       
    }
     cout<<endl;
    
    return 0;
}
