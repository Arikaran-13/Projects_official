#include<iostream>
#include<vector>
using namespace std;
void passed(){
    int i,n,m,k,count=0,count2=0; cin>>n>>m>>k; vector<int>v(n);
    for(i=0;i<n;i++)cin>>v[i];

    for(i=0;i<m;i++) if(v[i]==1)count2++; 

     for(i=0;i<n;i++) if(v[i]==1)count++;

   if(count==n)cout<<"100\n";

   else if(count2!=m)cout<<0<<"\n";
   
    else cout<<k<<"\n"; 
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;
    while(tc-->0){passed();}
    return 0;
}