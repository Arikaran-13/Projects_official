#include<iostream>
#include<math.h>
#include<vector>
#include<numeric>
using namespace std;
long long i,k;
void solve(){
    long long n,power; cin>>n;  vector<long long>v;  //power=pow(n,2);
   for(i=1;i<n+1;i++){
       if(i<=n)
       v.push_back(i);
       if(i==n-1){v.push_back(i);}
   
   }
   int k= accumulate(v.begin(),v.end(),0); 
   long long add=n-k;  v.push_back(n-k); 
   if(n-k != 0){
      
       for(int i=0;i<n+1;i++)cout<<v[i]<<" ";
       cout<<"\n";
    } 
   
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;
    while(tc-->0)solve();
    return 0;
}