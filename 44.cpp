#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << " how are you " << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << " what do you need  " << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};

class a
{
    int a;

public:
    void sey()
    {
        cout << " what " << endl;
    }
};
class b : public a
{
    int a;

public:
    void sey()
    {
        cout << " can't pull this  " << endl;
    }
};

int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();

    a c;
    c.sey();
    b r;
    r.sey();

    return 0;
}