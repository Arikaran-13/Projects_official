#include<iostream>
using namespace std;
class Mother{
    private:
    string s;
    public:
    Mother(string k) { s=k;}
    void display() { cout<<s;}
};
class daughter : public Mother{
    private:
    string n;
    public :
    daughter(string h) : Mother(h){n=h;}
    void display(){
        cout<<endl<<n;
    }
};
int main(){
    Mother m("hi dear");
    daughter d("hi mom");
    d.display();
    return 0;
}