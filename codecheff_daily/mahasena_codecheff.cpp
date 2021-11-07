#include<iostream>
using namespace std;
int main(){
    int sol,l,ul;
    cin>>sol;
    while(sol-->0){
        int weapons;
        cin>>weapons;
        if(weapons%2==0)
        l++;
        else 
        ul++;
    }
    (l>ul)?cout<<"READY FOR BATTLE" : cout<<"NOT READY";
    return 0;
}