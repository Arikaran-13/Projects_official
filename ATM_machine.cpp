#include<iostream>
#include<windows.h>          // PASSWORD = 1010
using namespace std;
void menu(){
    cout<<"******************WELCOME******************"<<endl;
    cout<<"1.check balance"<<endl<<"2.deposit money"<<endl<<"3.withdraw amount"<<endl<<"4.Exit\n";
    cout<<"*******************************************"<<endl;
}
int main(){
    int option,balance=1000,amount,withdraw,password;
    while(1){
        menu();
        cout<<"option: ";   cin>>option;

        system("cls");
        switch(option){
            case 1: {
                cout<<"check balance"<<endl;
                cout<<balance<<" RS"<<endl;
                break;
            }
            case 2: {
                cout<<"deposit money"<<endl;
                cout<<"enter the amount: "<<endl;
                cin>>amount;
                balance += amount;
                break;
            }
            case 3: {
                cout<<"withdraw money"<<endl;
                cout<<"enter the amount to withdraw: "<<endl;
                cin>>withdraw;
                if(withdraw>=balance){
                    cout<<"not enough money";
                    return 0;
                }
                cout<<"enter the password"<<endl;
                cin>>password;
                if(password == 1010){
                    cout<<"access granted"<<endl;
                    Sleep(3000);
                    cout<<"withdrawn successful"<<endl;
                    balance -= withdraw;
                }
                else {
                    cout<<"Access denied";
                    return 0;
                }

                break;
            }
            case 4: cout<<"\nThanks for banking with us\n , welcome again";
            return 0;
            default: cout<<"pls Enter the correct option";

        }
    }
    return 0;
}