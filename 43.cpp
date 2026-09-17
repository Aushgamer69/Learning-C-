#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void get_base2int(int b)
    {
        base2int = b;
    }
};
class dervied : public base1, public base2{
    public:
    void show(){
        cout<<"the vlaue of base 1 is "<<base1int<<endl;
        cout<<"the vlaue of base 2 is "<<base2int<<endl;
        cout<<"the sum of b1 and b2 is  "<<base1int + base2int <<endl;
    }

};
int main()
{
    dervied e1;
    e1.get_base1int(25);
    e1.get_base2int(67);
    e1.show();
    return 0;
}