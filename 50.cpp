#include <iostream>
using namespace std;
class com
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    com c1;  
    com *ptr = &c1;
    (*ptr).setdata(2, 4);
    // (*ptr).getdata();
    ptr->getdata();

    com *ptr1 = new com[4];
    ptr1->setdata(3,5);
    ptr1->getdata();
    return 0;
}