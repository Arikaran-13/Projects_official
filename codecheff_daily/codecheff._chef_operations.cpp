#include<iostream>
#include<vector>
using namespace std;
int main(){
  int tc; cin>>tc;
  
    while(tc--){

    int i,n; cin>>n;

      vector<int>a(n,0);
      vector<int>b(n);

   for(i=1;i<=n;i++)  cin>>b[i];
   int k=1;
    
    for(i=1;i<=n;i++){
        if(i<=3){
            a[i] += k;
            k++;
            }
        if(i>=3){
            if(i==3) k=1;
            a[i] += k;
             k++;
        }
    }
    if(b==a){
         cout<<"TAK"<<endl; } 
         else {
         cout<<"NIE"<<endl; }
    }
    return 0;

}