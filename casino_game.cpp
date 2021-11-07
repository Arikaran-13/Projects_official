#include<bits/stdc++.h>
using namespace std;
int main(){

        cout << "\n...............Casino game.................\n";
        cout << "Enter your First name: ";
        string s;
        cin >> s;
        cout << "total balance in account:$$  ";
        int amt;
        cin >> amt;
        int dm, betamt;
    while(true) {
        cout << "Enter the bid amount: ";
        cin >> dm;
        amt = amt - dm;
        if(amt<=0){
            cout<<"Insufficient funds please refill the cash\n";
            return 0;
        }
        cout << "Start guess the number(from 1 to 10 ) : ";
        int num;
        cin >> num;
        srand(time(0));
        int ans = rand() % 10 + 1;
        if (num == ans) {
            cout << "\n $$$...you have won...$$$\n";
            amt = (10 * dm) + amt;
            cout << "your new balance is : " << amt;
        } else {
            cout << "\nBetter luck next time\n ";
            cout << "your account balance is: " << amt;
        }
        cout<<"\nWant to continue..enter 1 or for exit 2: "; int close; cin>>close;
        if(close==2){
            return 0;
        }
    }
return 0;


}