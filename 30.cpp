#include <iostream>
using namespace std;
class com
{
    int a, b;

public:
    com(void);
    void print()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};

com ::com(void)
{
    a = 23;
    b = 56;
    
}

int main()
{
    com t2;
    t2.print();
    return 0;
}