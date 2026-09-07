#include <iostream>
using namespace std;
class com
{
    int a, b;

public:
    com()
    {
        a = 0;
        b = 0;
    }
    com(int x, int g)
    {
        a = x;
        b = g;
    }
    com(int x)
    {
        a = x;
        b = 0;
    }
    void print()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};
int main()
{
    com c1(34, 56);
    c1.print();
    com c2(23);
    c2.print();
    com c3;
    c3.print();
    return 0;
}