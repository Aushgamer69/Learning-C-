#include <iostream>
using namespace std;
class b
{
    int b;

public: 
    void setdata(int b)
    {
        this->b = b;
        
    }
    void getdata(void)
    {

        cout << "the vlaue of b is " << b << endl;
    }
};
int main()
{
    b b;
    b.setdata(5);
    b.getdata();

    return 0;
}