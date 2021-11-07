#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,tc; cin>>tc;
    while(tc-->0){
     cin>>n;
string s; cin>>s;
string st;
for(int i=0;i<n;i++){
    if(s[i] != '.') st+=s[i];
}
bool ans=true;
if(st.size() %2 !=0){cout<<"invalid"; break;}
for(int i=0;i<st.size();i++){
if(i%2==0){
    if(st[i]=='T')ans=false;
}
else {
    if(i%2 !=0){
        if(st[i]=='H')ans =false;
    }
}
}
if(ans)cout<<"Valid"<<endl;
else cout<<"Invalid"<<endl;
    }
return 0;
}