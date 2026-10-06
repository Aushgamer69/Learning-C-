#include <iostream>
using namespace std;
// float funacv(int a ,int b){
// float avg = (a + b)/2.0;
// return avg;
// }

// float funacv2(int a ,float b){
// float avg = (a + b)/2.0;
// return avg;
// }
template <class T>
void swab(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funacv2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funacv2(94, 76);
    printf("the avg number is %f\n ", a);

    int x = 5, y = 8;
    swab(x, y);
    cout << x << endl
         << y;

    return 0;
}