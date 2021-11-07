#include<iostream>
using namespace std;
void shipname(){
    char n; cin>>n;
    if(n=='b' || n=='B')cout<<"BattleShip\n";
    else if(n=='c' || n=='C')cout<<"Cruiser\n";
    else if(n=='d' || n=='D')cout<<"Destroyer\n";
    else cout<<"Frigate\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin>>tc;
    while(tc-->0){shipname();}
    return 0;
}