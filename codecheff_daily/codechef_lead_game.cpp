#include<iostream>
using namespace std;
int main(){
    int i,j,n,p1,p2,sum1=0,sum2=0,lead=0,diff=0,winner;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>p1>>p2;
       sum1 += p1;
       sum2 += p2;
       if(sum1>sum2)
       {
           diff=sum1-sum2;
           lead=diff;
           winner=1;
       }
       else 
       {
           diff=sum2-sum1;
           lead=diff;
           winner=2;
       }

    }
    cout<<lead<<" "<<winner;;
    
    return 0;
}