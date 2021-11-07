#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void expense(){
    int q,p,tp; cin>>q>>p;
     tp=p*q; if(q>1000) tp -= tp/10; cout<<fixed<<setprecision(6)<<tp<<"\n";
}
int main(){
    int tc ; cin>>tc;
    while(tc--){expense();}
    return 0;
}