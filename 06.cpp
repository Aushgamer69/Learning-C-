#include<iostream>
using namespace std;
int c = 34;

int main(){
    int a, b,c;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    cout<<"enter the value of b :  "<<endl;
    cin>>b;
    c = a+b;
    cout<<"the sum of a+b is the sum of c : "<<c<<endl;
    cout<<"the sum of a+b is the sum of global c : "<<::c;
    return 0;

} 
