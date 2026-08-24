#include <iostream>
using namespace std;
class com;

class calculator
{
public:
    int add(int x, int z)
    {
        return (x + z);
    }
    int sumcom(com, com);
};

class com
{
    int x;
    int z;
    friend int calculator ::sumcom(com o1, com o2);

public:
    void setnum(int g1, int g2)
    {
        x = g1;
        z = g2;
    }
    void print()
    {
        cout << "your num is " << x << " + " << z << " i " << endl;
    }
};
int calculator::sumcom(com o1, com o2)
{
    return (o1.x + o2.z);
}

int main()
{
    com o1, o2;
    o1.setnum(23, 45);
    // o1.print();

    o2.setnum(35, 87);
    // o2.print();

    calculator sp;
    int rest = sp.sumcom(o1, o2);
    cout << "the sum of o1 and o2 is  " << rest << endl;

    return 0;
}