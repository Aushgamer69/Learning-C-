#include<iostream>
using namespace std;
class complexs
{
    int a;
    int b;
    public:
    void setnumber(int n1 , int n2){
        a = n1;
        b = n2;
    }
    friend complexs sumcomplexs(complexs o1 , complexs o2);
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
complexs sumcomplexs(complexs o1, complexs o2 ){
    complexs o3;
    o3.setnumber((o1.a + o2.a) ,(o1.b + o2.b));
    return o3;
}

int main(){
  complexs Q1 ,Q2, sum ;
  Q1.setnumber(45,56);
  Q1.printnumber();

  Q2.setnumber(23,98);
  Q2.printnumber();

  sum= sumcomplexs( Q1 , Q2);
  sum.printnumber();


    return 0;
}