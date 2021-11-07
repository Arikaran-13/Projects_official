#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i,j,a[100];
    for(i=0;i<t;i++){
      cin>>a[i];
    }
    for(i=0;i<t;i++){
        for(j=i+1;j<t;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    for(i=0;i<t;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}