#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void salarychef(){
    int x,y; cin>>x>>y;
    string s; cin>>s; vector<int>v;
    int count1=0,i,count2=0;
    for(i=0;i<30;i++){
        if(s[i]=='1'){
            count1++;
            count2++;
        }
       // else if(i==30)
        else{
           v.push_back(count2);
           count2=0;
        }
    }
    v.push_back(count2);
 
    cout<<count1*x + (*max_element(v.begin(),v.end()))*y<<"\n";
    
}
int main(){
    int tc; cin>>tc;
    while(tc-->0)salarychef();
}