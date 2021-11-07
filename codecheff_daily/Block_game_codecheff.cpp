#include<iostream>
using namespace std;
void palindrome(){
    int n;cin>>n;
    int temp=n,rem,rev;
   rev=0;
    while(n>0){
       
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    if(rev==temp)cout<<"win\n";
    else cout<<"loose\n";
    //cout<<rev<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin>>tc;
    while(tc--){
        palindrome();
    }
    return 0;
}