#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "the vlaue of a is " << *(ptr) << endl;

    int *p = new int(56);
    cout << "the value of at address p is " << *(p) << endl;

    int *arr = new int[2];
    arr[0] = 47;
    arr[1] = 24;
    // delete [] arr;
    cout << "the vlaue of arr[0] is " << arr[0] << endl;
    cout << "the vlaue of arr[1] is " << arr[1] << endl;

    return 0;
}