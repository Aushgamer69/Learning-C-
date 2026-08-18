#include<iostream>
using namespace std;
class ep
{
    private:
    int a, b, c;
    public:
    int d,e,t;
    void set(int a1, int b2, int c3);
    void get(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<e<<endl;
        cout<<"the value of e is "<<d<<endl;
        cout<<"the value of t is "<<t<<endl;
    }
};
void ep::set(int a1, int b2, int c3){
    a = a1;
    b = b2;
    c = c3;
}
int main(){
   ep Ayush ;
//    Ayush.a = 45;
   Ayush.e = 56;
   Ayush.d = 89;
   Ayush.t = 34;

   Ayush.set(23,45,77);
   Ayush.get();
    return 0;
}