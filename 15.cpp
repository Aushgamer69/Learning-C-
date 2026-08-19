#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
    int num1,num2;
    cout<<"enter the value of num 1 "<<endl;
    cin>>num1;
    cout<<"enter the vlaue of num2 "<<endl;
    cin>>num2;
    cout<<"the sum of value for numaber 1 and to is"<<sum(num1, num2)<<endl;
    return 0;


}
int sum(int a , int b){

    int c = a+b;
    return c;
}