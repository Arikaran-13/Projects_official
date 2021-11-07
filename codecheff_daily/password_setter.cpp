#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,tc; cin>>tc;
    while(tc-->0){
string s; cin>>s;
int len=s.size();
for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(s[i]==s[j]){
            for(int k=j;k<len;k++){
            s[k]=s[k+1];
            }
            len--;
            j--;
        }
       }
       }
cout<<s<<endl;
    }
return 0;
}