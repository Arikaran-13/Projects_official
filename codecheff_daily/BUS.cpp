#include<iostream>
#include<set>
using namespace std;
void solve(){
    int n,m,q; cin>>n>>m>>q;  set<int>bus; bool flag=true;
    while(q--){
    char ch; cin>>ch;
    int i; cin>>i;
    if(ch=='+'){
       if( bus.find(i) !=  bus.end()){flag==false;}
       bus.insert(i);
       if(bus.size()>m)flag=false;
    }
    else if(ch=='-'){
        if(bus.find(i) == bus.end()){flag=false;}
        else{
           bus. erase(i);
           if(bus.size()>m)flag=false;
        }
    }
    
    }
    if(!flag)cout<<"Inconsistent\n";
    else cout<<"Consistent\n";
    
    
    
}
int main(){
    int tc; cin>>tc;
    while(tc-->0)solve();
    return 0;
        
    
}