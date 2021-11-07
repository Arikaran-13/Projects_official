#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,tc,count=0;   cin>>tc;
   
   while(tc--){
          cin>>n;
     vector<int> a(n,0);
     vector<int> b(n,0);
    
          
     for(i=0;i<n;i++) cin>>a[i];
     for(i=0;i<n;i++) cin>>b[i];
     count=0;
     for(i=0;i<n;i++){
         if(a[i]-a[i-1] >= b[i]) count++;
     }
     cout<<count<<endl;
     }
     return 0;

     
}