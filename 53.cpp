#include <iostream>
using namespace std;
class baseclass
{
public:
    int base1;
    void display()
    {
        cout << "displaying base1 " << base1 << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int derived1;
    void display()
    {
        cout << "displaying base1 " << base1 << endl;
        cout << "displaying derived1 " << derived1 << endl;
    }
};
int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->base1 = 54;
    base_class_pointer->display();

    derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->derived1 = 75;
    derived_class_pointer->display();
    return 0;
}