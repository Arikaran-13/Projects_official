#include<iostream>
using namespace std;
class shape{
    private:
    int width;
    int height;
    public:
    shape(int l,int b){
        width=l; height=b;
    }
    void display(){
        cout<<width<<" "<<height;
    }
};
class triangle : public shape{
    private:
    int x,y;
    public:
    triangle(int a,int b) :shape(a,b){ x=a; y=b;}
    void area(){
       int t= x*y/2;
       cout<<t;
       
    }
    void display(){
       cout<< 0;
    }
};
class rectangle : public shape{
    private:
    int w,h;
    public:
    rectangle(int a,int b) : shape(a,b){ w=a; h=b;}
    void area(){
        cout<<w*h;
    }
    void display(){
        cout<<w<<" "<<h;
    }
};
int main(){
   // shape s(10,10);
    shape *s1;
    triangle t(2,5);
    rectangle r(7,5);

   s1=&r;
  
    s1->display();
    return 0;


}