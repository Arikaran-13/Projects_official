#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
void nicepair(){
long long n,i,j,count=0; cin>>n; vector<int>v(n);
for(int i=1;i<=n;i++)cin>>v[i];

for(i=1;i<=n;i++){
  for(j=i+1;j<=n;j++){ 
    if(j-i==(abs(v[j]-v[i]))){
        count++;
    }
}
}

cout<<count<<"\n";

}
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
int tc; cin>>tc;
while(tc-->0){nicepair();}
return 0;
}