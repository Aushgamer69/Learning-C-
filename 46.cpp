#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "this is base1  class construtor called " << endl;
    }
    void print1(void)
    {
        cout << "the vlaue of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "this is base2  class construtor called " << endl;
    }
    void print2(void)
    {
        cout << "the vlaue of data2 is " << data2 << endl;
    }
};

class derive : public base1, public base2
{
    int derive1, derive2;

public:
    derive(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derive1 = c;
        derive2 = d;
        cout << "the derive class constutor called " << endl;
    }
    void print3(void)
    {
        cout << "the vlaue of deriver1 is " << derive1 << endl;
        cout << "the vlaue of deriver2 is " << derive2 << endl;
    }
};
int main()
{
    derive no(22, 44, 66, 89);
    no.print1();
    no.print2();
    no.print3();
    return 0;
}