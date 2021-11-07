#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;
void nicepair(){
int n,i,j,count=0; cin>>n; string s; cin>>s;


for(i=0;i<n;i++){
  for(j=i+1;j<min(i+11,n);j++){ 
    if(j-i==(abs(s[j]-s[i]))){
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