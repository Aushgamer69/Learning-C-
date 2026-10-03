#include <iostream>
using namespace std;

template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dot(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] =4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 3;
    // vector v2(3);
    // v2.arr[0] =4;
    // v2.arr[1] = 14;
    // v2.arr[2] = 33;
    // int a = v1.dot(v2);
    // cout<<a<<endl;
    vector<float> v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 1.3;
    v1.arr[2] = 2.3;
    vector<float> v2(3);
    v2.arr[0] = 3.4;
    v2.arr[1] = 1.4;
    v2.arr[2] = 3.3;
    float a = v1.dot(v2);
    cout << a << endl;
    return 0;
}