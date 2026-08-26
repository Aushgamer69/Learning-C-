#include <iostream>
using namespace std;
class c2;
class c1
{
    int value;

public:
    void indata(int a)
    {
        value = a;
    }
    void display(void)
    {
        cout << value << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};

class c2
{
    int value2;

public:
    void indata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
void exchange(c1 &x, c2 &y)
{
    int tum = x.value;
    x.value = y.value2;
    y.value2 = tum;
}
int main()
{
    c1 t1;
    c2 t2;
    t1.indata(23);
    t2.indata(78);
    exchange(t1, t2);
    cout << "the vlaue of after c1 exchaning become : ";
    t1.display();
    cout << "the vlaue of after c2 exchaning become : ";
    t2.display();
    return 0;
}