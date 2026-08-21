#include <iostream>
using namespace std;

class shop
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 5000;
        cout << "enter the id " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of epmloyee is " << id << endl;
    }
};

int main()
{
    //    shop Ayush,vivak ,tajes ;
    //    Ayush.setid();
    //    Ayush.getid();
    shop fb[5];
    for (int i = 0; i < 5; i++)

    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}