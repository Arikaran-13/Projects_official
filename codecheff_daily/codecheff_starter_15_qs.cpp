#include<iostream>
#include<vector>
using namespace std;
void testmatch(){
    int q=5,ind=0,eng=0;  vector<int>v(q);
    int a,b,c,d,e; cin>>a>>b>>c>>d>>e; v.push_back(a); v.push_back(b); v.push_back(c);
    v.push_back(d); v.push_back(e); 
for(int i=0;i<v.size();i++){
    if(v[i]==1)ind++;
   else if(v[i]==2)eng++;
}
if(ind>eng)cout<<"INDIA\n";
if(ind<eng)cout<<"ENGLAND\n";
if(ind==eng) cout<<"DRAW\n";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc; 
    while(tc-->0){testmatch();}
    return 0;
}