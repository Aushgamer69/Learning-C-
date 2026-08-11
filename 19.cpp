#include<iostream>
using namespace std;


int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);

}



int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    
    return n * fact(n-1);
}

int main(){
    cout<<"enter the number"<<endl;
    int a;
    cin>>a;
    // cout<<"the factorial of "<<a<<" is "<<fact(a)<<endl;
    cout<<"the term fibonacci sequence at position   "<<a<<" is "<<fib(a)<<endl;
    return 0;
}