#include<iostream>
using namespace std;

class com
{
    int a, b;

public:
    com(int x , int y);
    void print()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};
com ::com(int x , int y)
{
    a = x;
    b = y;
    
}

int main(){
    com a(3,6);
    com b = com(6 , 7);
    a.print();
    b.print();
    return 0;
}