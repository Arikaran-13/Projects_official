#include<iostream>
using namespace std;
int main(){
    int n,b[10],i,count=0,k=0,t;
    cin>>t;
   while(t--){
    cin>>n;
     //i=0;
     k=0;
   for(i=0;n>0;i++){
        count++;
        b[i]=n%10;
        n=n/10;
        i++;
        }
    for(i=0;i<count;i++){
      if(b[i]==4){
          k++;
          }
      }
    cout<<k<<endl;
    
    }
    return 0;
    
    
}