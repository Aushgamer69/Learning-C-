#include <iostream>
using namespace std;
class g;

class v
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(v, g);
};

class g
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(v, g);
};
void add(v o1, g o2)
{
    cout << "summing of data of v and g objects give me " << o1.data + o2.num << endl;
}
int main()
{
    v s1;
    s1.setvalue(5);

    g e1;
    e1.setvalue(4);
    add(s1 , e1);
    return 0;
}