#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void decimaltoAll(int n,int newbase){
    int rem;  vector<int>v;
    while(n>newbase){
        rem=n%newbase;
        v.push_back(rem);
        n=n/newbase;
    }
    v.push_back(n);
    for(int i=v.size()-1;i>=0;i--)cout<<v[i];
    cout<<"\n";
}
void Alltodecimal(int n,int base){
    int sum=0,rem; int pv=0;
    while(n>0){
        rem=n%10;
        sum+= rem*pow(base,pv);
        pv++; n=n/10;

    }

   decimaltoAll(sum,10);
}
int main(){
while(1) {
    cout << "Enter the number for conversions: ";
    double num;
    cin >> num;
    cout << "Enter the base for the entered number: ";
    int base;
    cin >> base;
    cout << "Enter the new base for conversion: ";
    int new_base;
    cin >> new_base;

    if (base == 10)
        decimaltoAll(num, new_base);

    else {
        Alltodecimal(num, new_base);
    }
    cout<<"If you want to continue again please enter 1 otherwise enter 2 : "; int close; cin>>close;
    if(close==2){
        return 0;
    }
}
    return 0;
}