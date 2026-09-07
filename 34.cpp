#include <iostream>
using namespace std;
class sim
{
    int data1;
    int data2;
    int data3;

public:
    sim(int a, int b = 9, int c = 6)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print()
    {
        cout << "the value of data is :  " << data1 << "  " << data2 << "  " << data3 << endl;
    }
};

int main()
{
    sim s(2);
    s.print();

    return 0;
}