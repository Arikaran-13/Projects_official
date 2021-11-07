#include<iostream>
using namespace std;
void dancemove(){
    int x,y,count=0; cin>>x>>y;
    while(x!=y){
        if(x<y){
            count++;
            x=x+2;
        }
        
        else if(x>y){
            count++;
            x=x-1;
            if(x==y){break;}
        }
    }
    cout<<count<<"\n";
}
int main(){
int tc; cin>>tc;
while(tc-->0)dancemove();
return 0;
}