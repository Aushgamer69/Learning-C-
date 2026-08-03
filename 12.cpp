// pointers
#include<iostream>
using namespace std;

int main(){
   int a=46;
   int* b = &a;
   int**c = &b;
   cout<<"this address of a is "<<&a<<endl;
   cout<<"this address of a is "<<b<<endl;
   cout<<"this value  of b is "<<*b<<endl;
   cout<<"this address of b is "<<&b<<endl;
   cout<<"this address of c is "<<c<<endl;
   cout<<"this value address of c is "<<**c<<endl;
  


    return 0;
}