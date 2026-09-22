#include <iostream>
using namespace std;
class test
{
    // int b;
    // int a;
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b( i* j)
    // test(int i, int j) : a(i), b( a + j)
    // test(int i, int j) : b(  j),a(i+b)
    test(int i, int j)
    {
        a = j;
        b = i;
        cout << "constructor executed " << endl;
        cout << "the vlaue of a is  " << a << endl;
        cout << "the vlaue of b is  " << b << endl;
    }
};
int main()
{
    test t(2, 3);
    return 0;
}