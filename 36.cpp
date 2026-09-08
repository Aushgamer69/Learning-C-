#include<iostream>
using namespace std;
class number
{
    int a ;
    public:
    number(){
        a = 0 ;
    }
    number(int num){
        a = num;
    }
    number(number &obj){
        cout<<" copy constructor called "<<endl;
        a = obj.a;
    }
    void display(){
        cout<<" the number for this object is "<<a<<endl;  
    }
};
int main(){
  number x ,y(23) ,z(57);
  x.display();
  z.display();
  y.display();
  number z1(z );
  z1.display();

    return 0;
}