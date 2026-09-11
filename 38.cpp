#include <iostream>
using namespace std;
class employee
{
public:
    float salary;
    int id;
    employee(int inpid)
    {
        id = inpid;
        salary = 40;
    }
    employee() {}
};
class programmer : employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    void getdata()
    {
        cout << id << endl;
    }
    int codingtool = 10;
};
// class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
// {

// }

int main()
{
    employee Ayush(1), raj(2);
    cout << Ayush.salary << endl;
    cout << raj.salary << endl;
    programmer sillf(1);
    cout << sillf.codingtool << endl;
    sillf.getdata();
    return 0;
}