#include<iostream>
using namespace std;
void prob(){
    int x; cin>>x;
    if(x>= 1 && x<100)cout<<"Easy";
    if(x>=100 && x<200)cout<<"Medium";
    if(x>=200 && x<=300)cout<<"Hard";

}
int main(){
    int tc; cin>>tc;
    while(tc--)prob();
    return 0;
}