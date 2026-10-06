#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3= char>
class ayush
{
public:
    T1 a;
    T2 b;
    T3 c;
    ayush(T1 x, T2 y,T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the vlaue of a is " << a << endl;
        cout << "the vlaue of b is " << b << endl;
        cout << "the vlaue of c is " << c << endl;
    }
};
int main()
{
    ayush<> g(4, 5.6,'c');
    g.display();
    cout<<endl;
    ayush<float,char,int> y(4.5,'u',8);
    y.display();
    return 0;
}