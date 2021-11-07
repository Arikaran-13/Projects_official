#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "\n...............High or low game.................\n";   int guess=0;

while(1){


        cout << "Start guess the number(from 1 to 99 ) : ";
        int num;     cin >> num;    guess++;

        srand(time(0));
        int ans = rand() % 99 + 1;
        if (num == ans) cout << "\n $$$...you have won...$$$\n";
        if(guess == 5){cout<<"\nYou have reached maximum limit , computer win the game :) \n"; return 0;}
        else if(num>ans) cout << "\nToo high , try again \n ";
        else if(num<ans) cout<<"\n Too low , try again\n";
    }
    return 0;


}