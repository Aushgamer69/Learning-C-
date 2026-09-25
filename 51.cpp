#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "the code of this item is " << id << endl;
        cout << "the price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int p,  i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}