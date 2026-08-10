#include<iostream>
using namespace std;

int sum (int a, int b){
int c = a +b;
return c;
}

void swap(int a, int b){
    int temp = a;
    a = b ;
    b = temp;
}

// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b ;
//     *b = temp;
// }
int& swapPointer(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp;
    return a;
}
    

int main(){
    int g = 6 ,p = 9;
    cout<<"the value of g and p is "<<g<<endl<<p<<endl;
    // swap(a,b)
    swapPointer(g, p) = 244;
    cout<<"the value of g and p is "<<g<<endl<<p<<endl;
    return 0;
}