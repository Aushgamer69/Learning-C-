#include<iostream>
using namespace std;
class shop2
{
    int a;
    int b;
    int c;
    public:
    void setdata(int v1 , int v2, int v3){
        a= v1;
        b= v2;
        c = v3;

    }
    void setdatabysum(shop2 o1,shop2 o2, shop2 o3){
        a = o1.a + o2.a + o3.a;    
        b = o1.b + o2.b + o3.b;    
        c = o1.c + o2.c + o3.c;    
    

    }
    void setsum(){
        cout<<"the sum is "<<a<<"+"<<b<<"+"<<c<<endl;
    }
};

int main(){
   shop2 e1,e2,e3,e4 ;
   e1.setdata(3,4,6);
   e1.setsum();

   e2.setdata(5,6,8);
   e2.setsum();

   e3.setdata(9,2,4);
   e3.setsum();

   e4.setdatabysum(e1,e2,e3);
   e4.setsum();
    return 0;
}